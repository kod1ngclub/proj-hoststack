#pragma once

typedef const char* const NoteId;
typedef const char* const NoteContent;

typedef struct {
    NoteId id;
    NoteContent content;
} Note;
