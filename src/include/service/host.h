#pragma once

#include "../entity/user/host.h"

#include "shared/error.h"
#include "shared/bool.h"

typedef struct HostStore_t HostStore;
typedef const HostStore* const HostStoreInstance;

MACRO_SERVICE_RESULTED(Host);

typedef RESULTED(Host)(*HostStoreReadHost)();

struct HostStore_t {
    const HostStoreReadHost host;
};

HostStoreInstance NewHostStore();
void FreeHostStore(HostStoreInstance instance);
