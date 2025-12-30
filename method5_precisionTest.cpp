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
}
