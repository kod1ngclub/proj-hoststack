#pragma once

typedef struct {
    int year;
    int month;
    int day;
} Date;

typedef struct {
    const Date from;
    const Date to;
} DateRange;
