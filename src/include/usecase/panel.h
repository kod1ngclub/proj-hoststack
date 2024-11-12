#pragma once

// entity
#include "../entity/panel/panel.h"

// service
#include "../service/store.h"

// usecase error model
#include "shared/dep.h"
#include "shared/error.h"

// REF define util
#include "shared/ref.h"

// usecase functions
UsecaseResult ReadPanel(
    DEP(Store, panelstore),

    REF(Panel, panel)
);

UsecaseResult ReadNote(
    DEP(Store, notestore),
    NoteId id,

    REF(Note, note)
);

UsecaseResult CreateNote(
    DEP(Store, panelstore),
    DEP(Store, notestore),
    NoteContent content,

    REF(Note, note)
);

UsecaseResult DeprecateNote(
    DEP(Store, panelstore),
    DEP(Store, notestore),
    NoteId id,

    REF(Note, note)
);
