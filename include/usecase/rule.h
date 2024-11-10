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
Result ReadConfig(
    REF(Config, config)
);

Result ReadUsers(
    REF_LIST(User, users)
);

Result KickUser(
    UserId id,

    REF(User, user)
);

Result BanUser(
    UserId id,

    REF(User, user)
);