#pragma once

#include "../entity/user/role.h"
#include "../entity/user/user.h"

#include "shared/error.h"
#include "shared/bool.h"

#include "shared/ref.h"

typedef struct UserStore_t UserStore;
typedef const UserStore* const UserStoreInstance;

typedef ServiceResult (*UserStoreIndex)(
    REF_LIST(UserId)
);

typedef ServiceResult (*UserStoreRead)(
    UserName name,

    REF_LIST(User)
);

typedef ServiceResult (*UserStoreKick)(
    UserId id,

    REF_LIST(User)
);

typedef ServiceResult (*UserStoreBan)(
    UserId id,

    REF_LIST(User)
);

struct UserStore_t {
    const UserStoreIndex index;
    const UserStoreRead read;
    const UserStoreKick kick;
    const UserStoreBan ban;
};

UserStoreInstance NewUserStore();
void FreeUserStore(UserStoreInstance instance);