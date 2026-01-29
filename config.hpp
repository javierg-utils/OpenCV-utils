#pragma once
#include <cstdio>
#include <io.h>     // _dup, _dup2, _fileno
#include <iostream>

namespace cvconfig {

    inline void silenciarOpenCVLogs() {
        int saved_stdout = _dup(_fileno(stdout));
        FILE* original_stdout = _fdopen(saved_stdout, "w");

        FILE* fp;
        freopen_s(&fp, "NUL", "w", stdout);

        // Restaurar inmediatamente para que tus cout funcionen
        _dup2(_fileno(original_stdout), _fileno(stdout));
    }

}
