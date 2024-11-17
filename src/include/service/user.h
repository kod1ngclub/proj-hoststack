#pragma once

#include "../entity/user/role.h"
#include "../entity/user/user.h"

#include "shared/error.h"
#include "shared/bool.h"

typedef struct UserStore_t UserStore;
typedef const UserStore* const UserStoreInstance;

UseServiceResultedList(UserId);
UseServiceResulted(User);

typedef ResultedList(UserId) (*UserStoreIndex)();

typedef Resulted(User) (*UserStoreReadByName)(
    UserName name
);

typedef Resulted(User) (*UserStoreKick)(
    UserId id
);

typedef Resulted(User) (*UserStoreBan)(
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
