#pragma once

#include "../shared/bool.h"

typedef enum {
    LOG_ENGINE_CONSOLE,
    LOG_ENGINE_SQLITE
} LogEngine;

typedef struct {
    // engine modules
    const LogEngine LOG_ENGINE;

    // utility configs
    const Bool LOCKOUT_GUEST;
    const Bool LOCKOUT_MEMBER;
    const Bool LOCKOUT_ADMIN;
} Config;
