#pragma once

#include "../entity/rule/config.h"

#include "shared/error.h"

#include "shared/ref.h"

typedef struct ConfigStore_t ConfigStore;
typedef const ConfigStore* const ConfigStoreInstance;

typedef ServiceResult (*ReadConfigStore)(
    REF(Config)
);

struct ConfigStore_t {
    const ReadConfigStore read;
};

ConfigStoreInstance NewConfigStore();
