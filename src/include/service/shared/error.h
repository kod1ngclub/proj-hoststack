#pragma once

typedef enum {
    SERVICE_ERROR_CODE_NONE,
} ServiceErrorCode;

typedef const char* const ServiceErrorBody;

typedef struct {
    const ServiceErrorCode code;
    const ServiceErrorBody body;
} ServiceResult;

#define GENERIC_SERVICE_RESULTED(t) typedef struct  { ServiceResult result; const t data; } SERVICE_RESULTED_##t
#define GENERIC_SERVICE_RESULTED_LIST(t) typedef struct  { ServiceResult result; const t* const data; const int size; } SERVICE_RESULTED_LIST_##t

#define RESULTED(t) SERVICE_RESULTED_##t
#define RESULTED_LIST(t) SERVICE_RESULTED_LIST_##t
