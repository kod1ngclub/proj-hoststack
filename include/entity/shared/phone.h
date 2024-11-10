#pragma once

typedef enum {
    PHONE_CHARACTER_0       = 0,
    PHONE_CHARACTER_1       = 1,
    PHONE_CHARACTER_2       = 2,
    PHONE_CHARACTER_3       = 3,
    PHONE_CHARACTER_4       = 4,
    PHONE_CHARACTER_5       = 5,
    PHONE_CHARACTER_6       = 6,
    PHONE_CHARACTER_7       = 7,
    PHONE_CHARACTER_8       = 8,
    PHONE_CHARACTER_9       = 9,
    PHONE_CHARACTER_NONE    = -1,
} PhoneDecimal;

typedef const PhoneDecimal CountryCode[3];
typedef const PhoneDecimal LocalCode[4];

typedef struct {
    const PhoneDecimal front[4];
    const PhoneDecimal back[4];
} SubscriberNumber;

typedef struct {
    const CountryCode country;
    const LocalCode local;
    const SubscriberNumber subscriber;
} Phone;
