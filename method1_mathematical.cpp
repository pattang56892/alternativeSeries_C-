#include "method1_mathematical.h"

double calculateMathematical() {
    double sum = 0.0;

    // Mathematical insight: S = H_100 - H_50 = sum from 51 to 100
    // Only need to sum from 51 to 100 (50 iterations instead of 100!)
    for (int i = 51; i <= 100; ++i) {
        sum += 1.0 / i;
    }

    return sum;
}
