#pragma once

#include "../entity/rule/config.h"
#include "../entity/rule/permission.h"

#include "shared/error.h"

typedef struct RuleStore_t RuleStore;
typedef const RuleStore* const RuleStoreInstance;

MACRO_SERVICE_RESULTED(Permission);
MACRO_SERVICE_RESULTED(Config);

typedef RESULTED(Permission) (*RuleStoreReadPermission)();

typedef RESULTED(Permission) (*RuleStoreReadConfig)();

struct RuleStore_t {
    const RuleStoreReadPermission perm;
    const RuleStoreReadConfig config;
};

RuleStoreInstance NewRuleStore();
void FreeRuleStore(RuleStoreInstance instance);
