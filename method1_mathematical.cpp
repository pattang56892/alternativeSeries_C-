#include "method1_mathematical.h"

double calculateMathematical() {
    double sum = 0.0;

    // Mathematical insight: S = H_100 - H_50 = sum from 51 to 100
    // Only need to sum from 51 to 100 (50 iterations instead of 100!)
    for (int i = 51; i <= 100; ++i) {
        sum += 1.0 / i;
    }

    return sum;

    /*
     * METHOD 1: Mathematical Optimization (The Mathematician)
     *
     * Mathematical Insight:
     *   1 - 1/2 + 1/3 - 1/4 + ... = (1 + 1/2 + ... + 1/100) - 2(1/2 + 1/4 + ... + 1/100)
     *   Using harmonic number properties: S = H_100 - H_50
     *   This simplifies to: 1/51 + 1/52 + ... + 1/100
     *
     * Algorithm: Simple summation from 51 to 100 (only positive terms)
     * Iterations: 50 (50% reduction compared to Method 0!)
     * Time Complexity: O(n/2) where n = 100
     * Space Complexity: O(1) - minimal memory usage
     *
     * Result: ~0.688172179310195 (identical to other methods)
     *
     * Best for: Performance optimization, demonstrating mathematical insight
     * Trade-off: Fastest iterative method, but requires understanding harmonic series
     */
}
