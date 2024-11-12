#pragma once

// entity
#include "../entity/panel/panel.h"

// usecase error model
#include "shared/error.h"

// REF define util
#include "shared/ref.h"

// usecase functions
UsecaseResult ReadPanel(
    REF(Panel, panel)
);

UsecaseResult ReadNote(
    NoteId id,

    REF(Note, note)
);

UsecaseResult CreateNote(
    NoteContent content,

    REF(Note, note)
);

UsecaseResult DeprecateNote(
    NoteId id,

    REF(Note, note)
);
