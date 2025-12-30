#ifndef METHOD1_MATHEMATICAL_H
#define METHOD1_MATHEMATICAL_H

/**
 * METHOD 1: Mathematical Approach (The Mathematician - Most Efficient)
 *
 * Description:
 *   Uses the mathematical insight that:
 *   S = 1 - 1/2 + 1/3 - 1/4 + ... + 1/99 - 1/100
 *     = (1 + 1/2 + ... + 1/100) - 2(1/2 + 1/4 + ... + 1/100)
 *     = H_100 - H_50
 *     = 1/51 + 1/52 + ... + 1/100
 *
 * Algorithm:
 *   - Initialize sum = 0.0
 *   - For i from 51 to 100:
 *       sum += 1.0 / i
 *
 * Complexity: O(n/2) time, O(1) space
 * Pros: Only 50 iterations instead of 100 (50% faster!)
 * Cons: Requires mathematical insight
 */

double calculateMathematical();

#endif // METHOD1_MATHEMATICAL_H
