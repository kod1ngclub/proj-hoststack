#pragma once

typedef enum {
    USECASE_ERROR_CODE_NONE,
} UsecaseErrorCode;

typedef const char* const UsecaseErrorBody;

typedef struct {
    const UsecaseErrorCode code;
    const UsecaseErrorBody body;
} UsecaseResult;

#define MACRO_USECASE_RESULTED(t) typedef struct  { UsecaseResult result; const t data; } USECASE_RESULTED_##t
#define MACRO_USECASE_RESULTED_LIST(t) typedef struct  { UsecaseResult result; const t* const data; const int size; } USECASE_RESULTED_LIST_##t

#define RESULTED(t) USECASE_RESULTED_##t
#define RESULTED_LIST(t) USECASE_RESULTED_LIST_##t
