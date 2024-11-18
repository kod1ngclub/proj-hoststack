#pragma once

#include "../entity/todo/group.h"
#include "../entity/todo/item.h"

#include "../service/group.h"
#include "../service/host.h"
#include "../service/rule.h"

#include "shared/error.h"
#include "shared/dep.h"

GENERIC_USECASE_RESULTED_LIST(GroupName);
GENERIC_USECASE_RESULTED(Group);
GENERIC_USECASE_RESULTED_LIST(Item);
GENERIC_USECASE_RESULTED(Item);

RESULTED_LIST(GroupName) ReadGroupIndex(
    DEP(GroupStore, groupstore),
    DEP(RuleStore, rulestore),

    Role role
);

RESULTED(Group) CreateGroup(
    DEP(GroupStore, groupstore),
    DEP(RuleStore, rulestore),

    Role role,

    Group group
);

RESULTED(Group) DeprecateGroup(
    DEP(GroupStore, groupstore),
    DEP(RuleStore, rulestore),

    Role role,

    GroupName groupname
);

RESULTED_LIST(Item) ReadItems(
    DEP(GroupStore, groupstore),
    DEP(RuleStore, rulestore),

    Role role,

    GroupName groupname
);

RESULTED(Item) CreateItem(
    DEP(GroupStore, groupstore),
    DEP(RuleStore, rulestore),

    Role role,

    GroupName groupname,

    ItemContent content,
    DateRange range
);

RESULTED(Item) DeprecateItem(
    DEP(GroupStore, groupstore),
    DEP(RuleStore, rulestore),

    Role role,

    ItemUID target
);

RESULTED(Item) ForkItem(
    DEP(GroupStore, groupstore),
    DEP(RuleStore, rulestore),

    Role role,

    ItemUID origin,

    ItemContent content,
    DateRange range
);
