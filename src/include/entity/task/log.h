#pragma once

#include "../shared/daterange.h"
#include "../shared/bool.h"

typedef const char* const LogId;
typedef const char* const LogContent;

typedef struct {
    LogId id;
    
    LogContent content;
    const DateRange range;
    const bool deprecated;
} Log;

// DOMAIN:
// 'Log' -> A certain back log (normally text)
