#ifndef SIMDJSON_DIRENT_PORTABLE_INC_
#define SIMDJSON_DIRENT_PORTABLE_INC_

#if (!defined(_WIN32) && !defined(_WIN64))
#include <dirent.h>
#else
#include "toni_ronnko_dirent.h"
#endif

#endif // SIMDJSON_DIRENT_PORTABLE_INC_
