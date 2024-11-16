#pragma once

#include "../entity/task/forest.h"
#include "../entity/task/log.h"
#include "../entity/user/user.h"

#include "../service/task.h"
#include "../service/rule.h"

#include "shared/error.h"

#include "shared/dep.h"
#include "shared/ref.h"

UsecaseResult ReadForestIndex(
    DEP(TaskStore, backstore),
    DEP(RuleStore, rulestore),

    User user,

    REF_LIST(ForestName, forestnames)
);

UsecaseResult ReadForest(
    DEP(TaskStore, backstore),
    DEP(RuleStore, rulestore),

    User user,
    ForestName name,

    REF(Forest, forest)
);

UsecaseResult CreateLog(
    DEP(TaskStore, backstore),
    DEP(RuleStore, rulestore),

    User user,
    ForestName name,
    LogContent content,

    REF(Forest, forest)
);

UsecaseResult DeprecateLog(
    DEP(TaskStore, backstore),
    DEP(RuleStore, rulestore),

    User user,
    ForestName name,
    LogId,

    REF(Forest, forest)
);

UsecaseResult ForkItem(
    DEP(TaskStore, backstore),
    DEP(RuleStore, rulestore),

    User user,
    ForestName name,
    LogId id,
    LogContent content,
    DateRange range,

    REF(Log, log)
);
