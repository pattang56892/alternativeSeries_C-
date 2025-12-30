#ifndef METHOD2_STLLAMBDA_H
#define METHOD2_STLLAMBDA_H

/**
 * METHOD 2: Modern STL & Lambda Approach (The Modernist)
 *
 * Description:
 *   Uses std::accumulate with a lambda function to avoid
 *   writing raw loops. Embraces functional programming style.
 *
 * Algorithm:
 *   - Generate vector [1, 2, 3, ..., 100] using std::iota
 *   - Use std::accumulate with lambda to fold the values:
 *       If n is odd: add 1.0/n
 *       If n is even: subtract 1.0/n
 *
 * Complexity: O(n) time, O(n) space (for vector storage)
 * Pros: Modern C++ style, separates data generation from computation
 * Cons: Extra memory for vector, slightly slower due to abstraction
 */

double calculateSTLLambda();

#endif // METHOD2_STLLAMBDA_H
