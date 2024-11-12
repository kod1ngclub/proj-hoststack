#pragma once

typedef enum {
    SERVICE_ERROR_CODE_NONE,
} ServiceErrorCode;

typedef const char* const ServiceErrorBody;

typedef struct {
    const ServiceErrorCode code;
    const ServiceErrorBody body;
} ServiceResult;
