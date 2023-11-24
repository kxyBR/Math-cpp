#include "Math-cpp.h"

namespace Math {
    template<typename... Args>
    int plus(Args... args) {
        return (args + ...);
    }
}
