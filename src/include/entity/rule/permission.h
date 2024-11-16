#pragma once

#include "../shared/bool.h"

typedef struct {
    // item management
    const Bool GUEST_READ_LOG;
    const Bool GUEST_CREATE_LOG;
    const Bool GUEST_DEPRECATE_LOG;

    const Bool MEMBER_READ_LOG;
    const Bool MEMBER_CREATE_LOG;
    const Bool MEMBER_DEPRECATE_LOG;

    const Bool ADMIN_READ_LOG;
    const Bool ADMIN_CREATE_LOG;
    const Bool ADMIN_DEPRECATE_LOG;

    // admin server management
    const Bool ADMIN_BAN;
    const Bool ADMIN_KICK;

    const Bool ADMIN_SHUTDOWN;
    const Bool ADMIN_RESTART;
} Permission;
