#ifndef MATH_H
#define MATH_H

namespace Math {
    template<typename... Args>
    int plus(Args... args);
    int minus(Args... args);
    int divide(Args... args);
    int multiply(Args... args);
}

#endif
