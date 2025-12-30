#include "method3_metaprogramming.h"

double calculateMetaprogramming() {
    // The calculation happens at COMPILE-TIME!
    // At runtime, this is just returning a pre-calculated constant.
    // The compiler has already computed AlternatingSum<100>::value
    // during compilation.

    return AlternatingSum<100>::value;
}
