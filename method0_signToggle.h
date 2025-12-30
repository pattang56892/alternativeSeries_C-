#ifndef METHOD0_SIGNTOGGLE_H
#define METHOD0_SIGNTOGGLE_H

/**
 * METHOD 0: Sign Toggle Approach (Original - Most Readable)
 *
 * Description:
 *   Uses a simple sign variable that flips between +1 and -1
 *   to handle the alternating pattern of the series.
 *
 * Algorithm:
 *   - Initialize sum = 0.0, sign = 1
 *   - For i from 1 to 100:
 *       sum += sign * (1.0 / i)
 *       sign = -sign
 *
 * Complexity: O(n) time, O(1) space
 * Pros: Very clear and beginner-friendly
 * Cons: Requires 100 iterations
 */

double calculateSignToggle();

#endif // METHOD0_SIGNTOGGLE_H
