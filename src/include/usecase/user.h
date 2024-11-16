#pragma once

// include entity
#include "../entity/user/user.h"

// include service
#include "../service/user.h"
#include "../service/rule.h"

#include "shared/error.h"

#include "shared/dep.h"
#include "shared/ref.h"

UsecaseResult KickUser(
    DEP(UserStore, userstore),
    DEP(RuleStore, rulestore),

    User user,
    UserId target,

    REF(User, banned)
);

UsecaseResult BanUser(
    DEP(UserStore, userstore),
    DEP(RuleStore, rulestore),

    User user,
    UserId target,

    REF(User, banned)
);
