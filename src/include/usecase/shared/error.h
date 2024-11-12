#pragma once

typedef enum {
    USECASE_ERROR_CODE_NONE,
} UsecaseErrorCode;

typedef const char* const UsecaseErrorBody;

typedef struct {
    const UsecaseErrorCode code;
    const UsecaseErrorBody body;
} UsecaseResult;
