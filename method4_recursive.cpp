#include "method4_recursive.h"

double recursiveSum(int n) {
    // Base case: when n reaches 0, return 0
    if (n == 0) {
        return 0.0;
    }

    // Recursive case: calculate current term + sum of previous terms
    // If n is odd, add 1.0/n; if even, subtract 1.0/n
    double currentTerm = (n % 2 == 1) ? (1.0 / n) : (-1.0 / n);

    return currentTerm + recursiveSum(n - 1);
}

double calculateRecursive() {
    return recursiveSum(100);

    /*
     * METHOD 4: Recursive Function Approach (Educational)
     *
     * Traditional Recursion:
     *   - Uses function call stack instead of loops
     *   - Each call handles one term, then calls for n-1
     *   - Demonstrates classic recursion pattern
     *
     * Call Stack Depth: 100 levels (from recursiveSum(100) down to recursiveSum(0))
     *
     * Algorithm Flow:
     *   recursiveSum(100) -> calculate 1/100 + recursiveSum(99)
     *   recursiveSum(99)  -> calculate -1/99 + recursiveSum(98)
     *   ...
     *   recursiveSum(1)   -> calculate 1/1 + recursiveSum(0)
     *   recursiveSum(0)   -> return 0.0 (base case)
     *
     * Time Complexity: O(n) where n = 100
     * Space Complexity: O(n) - call stack depth of 100
     *
     * Best for: Understanding recursion, educational purposes
     * Trade-off: Stack overhead, risk of stack overflow for very large n
     * Warning: Not suitable for n > ~10,000 (typical stack limit)
     */
}
