#pragma once

#include "../shared/bool.h"

typedef struct {
    const Bool GUEST_READ_ITEM;
    const Bool GUEST_CREATE_ITEM;
    const Bool GUEST_DEPRECATE_ITEM;

    const Bool GUEST_READ_GROUP;
    const Bool GUEST_CREATE_GROUP;
    const Bool GUEST_DEPRECATE_GROUP;

    const Bool HOST_READ_ITEM;
    const Bool HOST_CREATE_ITEM;
    const Bool HOST_DEPRECATE_ITEM;

    const Bool HOST_READ_GROUP;
    const Bool HOST_CREATE_GROUP;
    const Bool HOST_DEPRECATE_GROUP;
} Permission;
