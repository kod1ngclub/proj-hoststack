#pragma once

#include "../entity/rule/permission.h"

#include "shared/error.h"

#include "shared/ref.h"

typedef struct PermissionStore_t PermissionStore;
typedef const PermissionStore* const PermissionInstance;

typedef ServiceResult (*ReadPermissionStore)(
    REF(Permission)
);

struct PermissionStore_t {
    const ReadPermissionStore read;
};

PermissionInstance NewPermissionStore();
