#ifndef METHOD5_PRECISIONTEST_H
#define METHOD5_PRECISIONTEST_H

#include <string>

/**
 * METHOD 5: Precision Comparison Suite (The Analyst)
 *
 * Description:
 *   Compares the accuracy of different floating-point types
 *   (float, double, long double) when calculating the series.
 *   Shows the importance of precision in numerical computing.
 *
 * Algorithm:
 *   - Calculate series using float precision
 *   - Calculate series using double precision
 *   - Calculate series using long double precision
 *   - Compare results and analyze error propagation
 *
 * Educational Value:
 *   - Demonstrates floating-point precision limits
 *   - Shows why double is standard in scientific computing
 *   - Illustrates cumulative rounding errors
 */

struct PrecisionResults {
    float resultFloat;
    double resultDouble;
    long double resultLongDouble;

    void display() const;
};

PrecisionResults calculatePrecisionTest();

#endif // METHOD5_PRECISIONTEST_H
