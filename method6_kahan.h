#ifndef METHOD6_KAHAN_H
#define METHOD6_KAHAN_H

/**
 * METHOD 6: Kahan Summation Algorithm (The Precision Expert)
 *
 * Description:
 *   Uses the Kahan (compensated) summation algorithm to minimize
 *   numerical error in floating-point addition. Industry-standard
 *   for precision-critical applications.
 *
 * Algorithm:
 *   - Maintain a running compensation variable for lost low-order bits
 *   - For each term:
 *       1. Adjust term by compensation
 *       2. Add to sum
 *       3. Calculate new compensation (what was lost in the addition)
 *
 * Invented by: William Kahan (1965), Turing Award winner
 *
 * Complexity: O(n) time, O(1) space
 * Pros: Significantly reduces numerical error, industry-proven
 * Cons: Slightly more complex, ~2x more operations per iteration
 */

double calculateKahan();

#endif // METHOD6_KAHAN_H
