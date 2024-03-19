#ifndef _SGIMG_COMMON_H
#define _SGIMG_COMMON_H

#include <atomic>

namespace sgimg {

using log_level_t = std::atomic<int>;

enum LogLevel {
    TRACE = 0,
    DEBUG = 1,
    INFO = 2,
    WARN = 3,
    ERROR = 4,
    OFF = 5,
    N_LEVEL = 6,
};

} // namespace sgimg

#endif