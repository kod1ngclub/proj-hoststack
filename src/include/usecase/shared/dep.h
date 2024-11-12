#pragma once

#define DEP(t, name) const t* const name

// It gets instance of certain service.
// You can write it from the scratch,
// But using DEP() is better for explicitness
