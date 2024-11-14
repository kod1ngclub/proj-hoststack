#pragma once

#include "../entity/rule/role.h"
#include "../entity/rule/user.h"

#include "shared/error.h"

#include "shared/ref.h"

typedef struct UserStore_t UserStore;
typedef const UserStore* const UserStoreInstance;

typedef ServiceResult (*UserStoreIndex)(
    REF_LIST(UserId)
);

typedef ServiceResult (*UserStoreReadById)(
    UserId id,

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
    const UserStoreReadById read_by_id;
    const UserStoreKick kick;
    const UserStoreBan ban;
};

UserStoreInstance NewUserStore();
