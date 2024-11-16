#pragma once

// include entity
#include "../entity/rule/user.h"

// include service
#include "../service/user.h"
#include "../service/config.h"

#include "shared/error.h"

#include "shared/dep.h"
#include "shared/ref.h"

UsecaseResult KickUser(
    DEP(UserStore, userstore),
    DEP(PermissionStore, permstore),

    User user,
    UserId target,

    REF(User, banned)
);

UsecaseResult BanUser(
    DEP(UserStore, userstore),
    DEP(PermissionStore, permstore),

    User user,
    UserId target,

    REF(User, banned)
);
