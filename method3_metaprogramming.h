#ifndef METHOD3_METAPROGRAMMING_H
#define METHOD3_METAPROGRAMMING_H

/**
 * METHOD 3: Template Metaprogramming (The Magician - Zero Runtime Cost!)
 *
 * Description:
 *   Uses compile-time template recursion to calculate the result
 *   during compilation. At runtime, it's just a constant value!
 *
 * Algorithm:
 *   - Recursive template structure AlternatingSum<N>
 *   - Base case: AlternatingSum<0>::value = 0.0
 *   - Recursive case: AlternatingSum<N>::value =
 *       (sign based on N % 2) / N + AlternatingSum<N-1>::value
 *
 * Complexity: O(0) runtime! All computation done at compile-time
 * Pros: Zero runtime cost, shows advanced C++ features
 * Cons: Longer compilation time, complex template syntax
 */

// Recursive template structure
template <int N>
struct AlternatingSum {
    static constexpr double value =
        ((N % 2 == 1 ? 1.0 : -1.0) / N) + AlternatingSum<N - 1>::value;
};

// Base case specialization
template <>
struct AlternatingSum<0> {
    static constexpr double value = 0.0;
};

// Wrapper function for consistent interface
double calculateMetaprogramming();

#endif // METHOD3_METAPROGRAMMING_H
