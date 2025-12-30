#include "method2_stlLambda.h"
#include <numeric>
#include <vector>

double calculateSTLLambda() {
    // Create a vector of integers 1 to 100
    std::vector<int> nums(100);
    std::iota(nums.begin(), nums.end(), 1);  // Fills 1, 2, 3... 100

    // Use std::accumulate with a lambda function
    double sum = std::accumulate(
        nums.begin(),
        nums.end(),
        0.0,
        [](double currentSum, int n) {
            // If n is odd, add it. If even, subtract it.
            return currentSum + ((n % 2 != 0) ? (1.0 / n) : (-1.0 / n));
        }
    );

    return sum;

    /*
     * METHOD 2: STL & Lambda Approach (The Modernist)
     *
     * Functional Programming Style:
     *   - Separates data generation (std::iota) from computation (std::accumulate)
     *   - Uses lambda expressions for inline logic
     *   - Avoids raw for loops (modern C++ best practice)
     *
     * Algorithm:
     *   1. Generate sequence [1, 2, 3, ..., 100] with std::iota
     *   2. Fold/reduce using std::accumulate with lambda
     *   3. Lambda checks odd/even to determine sign
     *
     * Time Complexity: O(n) where n = 100
     * Space Complexity: O(n) - stores vector of 100 integers
     *
     * Best for: Modern C++ enthusiasts, functional programming advocates
     * Trade-off: Elegant code but uses more memory (vector storage)
     */
}
