#pragma once

/////////////////////////////////////////////////////////////////////////////////

bool
is64bitSystem();

inline
int
ptrSize() {
    return is64bitSystem() ? 8 : 4;
}

/////////////////////////////////////////////////////////////////////////////////