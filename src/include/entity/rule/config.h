#pragma once

#include "../shared/bool.h"

typedef struct {    
    // item management
    const Bool GUEST_READ_ITEM;
    const Bool GUEST_CREATE_ITEM;
    const Bool GUEST_DEPRECATE_ITEM;

    const Bool MEMBER_READ_ITEM;
    const Bool MEMBER_CREATE_ITEM;
    const Bool MEMBER_DEPRECATE_ITEM;

    const Bool ADMIN_READ_ITEM;
    const Bool ADMIN_CREATE_ITEM;
    const Bool ADMIN_DEPRECATE_ITEM;

    // admin server management
    const Bool ADMIN_BAN;
    const Bool ADMIN_KICK;
    const Bool ADMIN_SHUTDOWN;
} Config;
