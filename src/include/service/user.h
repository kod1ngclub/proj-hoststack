#pragma once

#include "../entity/user/role.h"
#include "../entity/user/user.h"

#include "shared/error.h"
#include "shared/bool.h"

typedef struct UserStore_t UserStore;
typedef const UserStore* const UserStoreInstance;

GENERIC_SERVICE_RESULTED_LIST(UserId);
GENERIC_SERVICE_RESULTED(User);

typedef RESULTED_LIST(UserId) (*UserStoreIndex)();

typedef RESULTED(User) (*UserStoreReadByName)(
    UserName name
);

typedef RESULTED(User) (*UserStoreKick)(
    UserId id
);

typedef RESULTED(User) (*UserStoreBan)(
    UserId id
);

struct UserStore_t {
    const UserStoreIndex index;
    const UserStoreReadByName read_by_name;
    const UserStoreKick kick;
    const UserStoreBan ban;
};

UserStoreInstance NewUserStore();
void FreeUserStore(UserStoreInstance instance);
