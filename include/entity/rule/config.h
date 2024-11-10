#pragma once

#include "../shared/bool.h"

typedef struct {
    // item management
    const Bool GUEST_READ_ITEM;
    const Bool GUEST_WRITE_ITEM;
    const Bool GUEST_DEPRECATE_ITEM;

    const Bool MEMBER_READ_ITEM;
    const Bool MEMBER_WRITE_ITEM;
    const Bool MEMBER_DEPRECATE_ITEM;

    const Bool ADMIN_READ_ITEM;
    const Bool ADMIN_WRITE_ITEM;
    const Bool ADMIN_DEPRECATE_ITEM;

    // note management
    const Bool GUEST_READ_NOTE;
    const Bool GUEST_WRITE_NOTE;
    const Bool GUEST_DEPRECATE_NOTE;

    const Bool MEMBER_READ_NOTE;
    const Bool MEMBER_WRITE_NOTE;
    const Bool MEMBER_DEPRECATE_NOTE;

    const Bool ADMIN_READ_NOTE;
    const Bool ADMIN_WRITE_NOTE;
    const Bool ADMIN_DEPRECATE_NOTE;

    // admin server management
    const Bool ADMIN_BAN;
    const Bool ADMIN_KICK;
    const Bool ADMIN_SHUTDOWN;
} Config;
