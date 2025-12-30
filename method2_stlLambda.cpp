#include "method2_stlLambda.h"
#include <numeric>
#include <vector>

double calculateSTLLambda() {
    // Create a vector of integers 1 to 100
    std::vector<int> nums(100);
    std::iota(nums.begin(), nums.end(), 1);  // Fills 1, 2, 3... 100

    // Use std::accumulate with a lambda function
    double sum = std::accumulate(
        nums.begin(),
        nums.end(),
        0.0,
        [](double currentSum, int n) {
            // If n is odd, add it. If even, subtract it.
            return currentSum + ((n % 2 != 0) ? (1.0 / n) : (-1.0 / n));
        }
    );

    return sum;
}
