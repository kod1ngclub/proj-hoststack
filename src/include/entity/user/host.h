#pragma once

#include "role.h"
#include "../shared/phone.h"
#include "../shared/bool.h"

typedef const char* const HostName;
typedef const char* const Password;

typedef struct {
    HostName name;
    Password password;
    const Phone phone;
} Host;
