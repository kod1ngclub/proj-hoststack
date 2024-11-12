#pragma once

// entity
#include "../entity/rule/config.h"
#include "../entity/rule/role.h"
#include "../entity/rule/user.h"

// service
#include "../service/store.h"

// usecase error model
#include "shared/error.h"
#include "shared/dep.h"

// REF define util
#include "shared/ref.h"

// usecase functions
UsecaseResult ReadConfig(
    DEP(Store, configstore),
    
    REF(Config, config)
);

UsecaseResult ReadUsers(
    DEP(Store, userstore),

    REF_LIST(User, users)
);

UsecaseResult KickUser(
    DEP(Store, userstore),
    UserId id,

    REF(User, user)
);

UsecaseResult BanUser(
    DEP(Store, userstore),
    UserId id,

    REF(User, user)
);
