#include "method5_precisionTest.h"
#include <iostream>
#include <iomanip>

// Helper function to calculate with specific precision type
template<typename T>
T calculateWithPrecision() {
    T sum = 0.0;
    int sign = 1;

    for (int i = 1; i <= 100; ++i) {
        sum += sign * (static_cast<T>(1.0) / i);
        sign = -sign;
    }

    return sum;
}

PrecisionResults calculatePrecisionTest() {
    PrecisionResults results;

    results.resultFloat = calculateWithPrecision<float>();
    results.resultDouble = calculateWithPrecision<double>();
    results.resultLongDouble = calculateWithPrecision<long double>();

    return results;
}

void PrecisionResults::display() const {
    std::cout << std::setprecision(20);
    std::cout << "\n=== PRECISION COMPARISON ===\n";
    std::cout << "float (32-bit):       " << resultFloat << "\n";
    std::cout << "double (64-bit):      " << resultDouble << "\n";
    std::cout << "long double (80-bit): " << resultLongDouble << "\n";

    // Calculate differences
    double floatError = resultDouble - resultFloat;
    long double longDoubleGain = resultLongDouble - resultDouble;

    std::cout << "\nError Analysis:\n";
    std::cout << "float vs double error:  " << floatError << "\n";
    std::cout << "long double gain:       " << static_cast<double>(longDoubleGain) << "\n";
    std::cout << "===========================\n";

    /*
     * METHOD 5: Precision Testing Suite (The Analyst)
     *
     * Purpose: Demonstrates floating-point precision differences
     *
     * Floating-Point Types Compared:
     *   - float:       32-bit (23-bit mantissa, ~7 decimal digits precision)
     *   - double:      64-bit (52-bit mantissa, ~15-17 decimal digits)
     *   - long double: 80-bit (64-bit mantissa, ~19-21 decimal digits on x86)
     *
     * What This Shows:
     *   1. Cumulative rounding errors in float vs double
     *   2. Why double is the standard for scientific computing
     *   3. Marginal gains from long double (platform-dependent)
     *   4. Error propagation in iterative calculations
     *
     * Typical Results:
     *   - float:  ~0.6881722 (loses precision around 7th digit)
     *   - double: ~0.688172179310195 (accurate to 15-17 digits)
     *   - long double: Similar to double (slight improvement)
     *
     * Educational Value: Understanding why precision matters in numerical computing
     * Best for: Demonstrating floating-point arithmetic limitations
     */
}
