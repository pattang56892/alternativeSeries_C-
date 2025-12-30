#ifndef METHOD4_RECURSIVE_H
#define METHOD4_RECURSIVE_H

/**
 * METHOD 4: Recursive Function Approach (Educational)
 *
 * Description:
 *   Uses traditional function recursion (not template recursion)
 *   to calculate the series. Educational for understanding
 *   call stacks and recursion limits.
 *
 * Algorithm:
 *   - Base case: recursiveSum(0) = 0.0
 *   - Recursive case: recursiveSum(n) =
 *       (sign based on n % 2) / n + recursiveSum(n-1)
 *
 * Complexity: O(n) time, O(n) space (call stack)
 * Pros: Educational, demonstrates recursion concepts
 * Cons: Stack overhead, risk of stack overflow for large n
 */

double calculateRecursive();
double recursiveSum(int n);

#endif // METHOD4_RECURSIVE_H
