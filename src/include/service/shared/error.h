#pragma once

typedef enum {
    SERVICE_ERROR_CODE_NONE,
} ServiceErrorCode;

typedef const char* const ServiceErrorBody;

typedef struct {
    const ServiceErrorCode code;
    const ServiceErrorBody body;
} ServiceResult;

#define UseServiceResulted(t) typedef struct  { ServiceResult result; const t data; } ServiceResulted##t
#define UseServiceResultedList(t) typedef struct  { ServiceResult result; const t* const data; const int size; } ServiceResultedList##t

#define Resulted(t) ServiceResulted##t
#define ResultedList(t) ServiceResultedList##t
