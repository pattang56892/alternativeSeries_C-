#include "method6_kahan.h"

double calculateKahan() {
    double sum = 0.0;
    double compensation = 0.0;  // Running compensation for lost low-order bits
    int sign = 1;

    for (int i = 1; i <= 100; ++i) {
        // Calculate the current term
        double term = sign * (1.0 / i);

        // Kahan summation algorithm:
        // Step 1: Adjust the term by the compensation
        double adjustedTerm = term - compensation;

        // Step 2: Add to sum (but this loses precision in low-order bits)
        double tempSum = sum + adjustedTerm;

        // Step 3: Calculate the new compensation
        // (tempSum - sum) recovers the high-order part of adjustedTerm
        // Subtracting this from adjustedTerm gives us what was lost
        compensation = (tempSum - sum) - adjustedTerm;

        // Step 4: Update sum
        sum = tempSum;

        // Flip sign for next iteration
        sign = -sign;
    }

    return sum;
}
