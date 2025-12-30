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

    /*
     * METHOD 6: Kahan Summation Algorithm (The Precision Expert)
     *
     * Invented by: William Kahan (1965), Turing Award Winner (1989)
     * Also known as: Compensated summation
     *
     * Problem Solved:
     *   When adding many floating-point numbers, small values get "lost"
     *   due to limited precision. Standard summation accumulates rounding errors.
     *
     * How Kahan Algorithm Works:
     *   1. Maintain a "compensation" variable tracking lost low-order bits
     *   2. Before adding each term, adjust it by the compensation
     *   3. After addition, calculate what was lost (new compensation)
     *   4. Apply compensation to next term
     *
     * Algorithm Steps (per iteration):
     *   adjustedTerm = term - compensation    // Compensate for previous loss
     *   tempSum = sum + adjustedTerm          // Add (loses precision)
     *   compensation = (tempSum - sum) - adjustedTerm  // Capture what was lost
     *   sum = tempSum                         // Update sum
     *
     * Time Complexity: O(n) - same as naive, but ~4x more operations per term
     * Space Complexity: O(1) - just one extra compensation variable
     *
     * Accuracy Improvement: Reduces rounding error by order of magnitude
     * Used in: Scientific computing, financial calculations, NASA, computer graphics
     *
     * Best for: Maximum numerical accuracy when precision is critical
     * Trade-off: Slightly slower (more operations), but significantly more accurate
     */
}
