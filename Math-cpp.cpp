#include "Math-cpp.h"

namespace Math {
    template<typename... Args>
    int plus(Args... args) {
        return (args + ...);
    }
    int minus(Args... args) {
        return (args - ...);
    }
    int divide(Args... args) {
        return (args / ...);
    }
    int multply(Args... args) {
        return (args * ...);
    }
}
