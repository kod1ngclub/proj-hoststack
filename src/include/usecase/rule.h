#pragma once

#include "../entity/rule/config.h"
#include "../entity/rule/role.h"
#include "../entity/rule/user.h"

#include "../service/store.h"

#include "shared/error.h"

#include "shared/dep.h"
#include "shared/ref.h"

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
