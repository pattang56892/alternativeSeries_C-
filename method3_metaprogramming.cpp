#include "method3_metaprogramming.h"

double calculateMetaprogramming() {
    // The calculation happens at COMPILE-TIME!
    // At runtime, this is just returning a pre-calculated constant.
    // The compiler has already computed AlternatingSum<100>::value
    // during compilation.

    return AlternatingSum<100>::value;

    /*
     * METHOD 3: Template Metaprogramming (The Magician)
     *
     * Compile-Time Computation:
     *   - Uses recursive template instantiation (see header file)
     *   - Compiler calculates the result DURING compilation
     *   - At runtime, this is simply loading a constant value
     *   - Zero runtime computational cost!
     *
     * How it works:
     *   - AlternatingSum<100> triggers AlternatingSum<99>, which triggers <98>...
     *   - Each template computes its term and adds to previous
     *   - Base case: AlternatingSum<0>::value = 0.0
     *   - All 100 terms summed at compile-time
     *
     * Time Complexity: O(0) runtime! O(n) compile-time
     * Space Complexity: O(1) runtime - just one constant
     *
     * Best for: Showing off C++ power, performance-critical code
     * Trade-off: Longer compilation time, complex template syntax
     * Note: Check assembly code - no loops, just a constant load!
     */
}
