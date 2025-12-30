#include "method0_signToggle.h"

double calculateSignToggle() {
    double sum = 0.0;
    int sign = 1;  // 1 represents positive, -1 represents negative

    for (int i = 1; i <= 100; ++i) {
        // Use 1.0 to ensure floating-point division
        // If we used 1/i, the result would be 0 for integers > 1
        sum += sign * (1.0 / i);

        // Flip the sign for the next iteration
        // (positive -> negative -> positive...)
        sign = -sign;
    }

    return sum;
}
