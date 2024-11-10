#pragma once

typedef enum {
    NONE,
} ErrorCode;

typedef const char* const ErrorBody;

typedef struct {
    const ErrorCode code;
    const ErrorBody body;
} Result;
