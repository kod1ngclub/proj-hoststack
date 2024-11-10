#pragma once

#include "role.h"
#include "../shared/phone.h"
#include "../shared/bool.h"

typedef const char* const UserId;
typedef const char* const UserName;
typedef const char* const Password;

typedef struct {
    const UserId id;

    const UserName name;
    const Password password;
    const Phone phone;

    const Role role;
    
    const Bool banned;
} User;
