#pragma once

// entity
#include "../entity/rule/config.h"
#include "../entity/rule/role.h"
#include "../entity/rule/user.h"

// usecase error model
#include "shared/error.h"

// REF define util
#include "shared/ref.h"

// usecase functions
UsecaseResult ReadConfig(
    REF(Config, config)
);

UsecaseResult ReadUsers(
    REF_LIST(User, users)
);

UsecaseResult KickUser(
    UserId id,

    REF(User, user)
);

UsecaseResult BanUser(
    UserId id,

    REF(User, user)
);