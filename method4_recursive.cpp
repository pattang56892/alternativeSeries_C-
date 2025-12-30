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
}
