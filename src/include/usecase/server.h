#pragma once

// include entity
#include "../entity/rule/user.h"

// include service
#include "../service/user.h"
#include "../service/permission.h"

#include "shared/error.h"

#include "shared/dep.h"
#include "shared/ref.h"

UsecaseResult StartServer(
    DEP(UserStore, userstore),
    DEP(PermissionStore, permstore),

    User user,
    UserId target,

    REF(User, banned)
);

UsecaseResult ShutdownServer(
    DEP(UserStore, userstore),
    DEP(PermissionStore, permstore),

    User user,
    UserId target,

    REF(User, banned)
);
