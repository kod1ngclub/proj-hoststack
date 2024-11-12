#pragma once

/* DEPENDANCY INJECTION
 * 
 * funcname(DEP(Store, store))
 * = funcname(const Store* const store)
 */
#define DEP(t, name) const t* const name
