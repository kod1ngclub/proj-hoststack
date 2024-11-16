#pragma once

// include entity
#include "../entity/user/user.h"

// include service
#include "../service/user.h"
#include "../service/rule.h"

#include "shared/error.h"

#include "shared/dep.h"
#include "shared/ref.h"

UsecaseResult ShutdownServer(
    DEP(UserStore, userstore),
    DEP(RuleStore, rulestore),

    User user,

    REF(User, banned)
);

UsecaseResult RestartServer(
    DEP(UserStore, userstore),
    DEP(RuleStore, rulestore),

    User user,

    REF(User, banned)
);
