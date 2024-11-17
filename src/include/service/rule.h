#pragma once

#include "../entity/rule/config.h"
#include "../entity/rule/permission.h"

#include "shared/error.h"

#include "shared/ref.h"
#include <stdlib.h>

typedef struct RuleStore_t RuleStore;
typedef const RuleStore* const RuleStoreInstance;

typedef ServiceResult (*RuleStoreReadPermission)(
    REF(Permission)
);

typedef ServiceResult (*RuleStoreReadConfig)(
    REF(Config)
);

struct RuleStore_t {
    const RuleStoreReadPermission perm;
    const RuleStoreReadConfig config;
};

RuleStoreInstance NewRuleStore();
void FreeRuleStore(RuleStoreInstance instance);
