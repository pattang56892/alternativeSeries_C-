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

    /*
     * METHOD 0: Sign Toggle Approach
     *
     * Algorithm: Uses a simple sign variable that alternates between +1 and -1
     * Iterations: 100 (one for each term in the series)
     * Time Complexity: O(n) where n = 100
     * Space Complexity: O(1) - only two variables used
     *
     * Calculates: 1 - 1/2 + 1/3 - 1/4 + ... + 1/99 - 1/100
     * Result: ~0.688172179310195
     *
     * Best for: Readability, learning basic loop patterns
     * Trade-off: Straightforward but requires full 100 iterations
     */

    /*
     * 方法 0：符号切换法
     *
     * 算法：使用一个简单的符号变量在 +1 和 -1 之间交替
     * 迭代次数：100 次（级数中的每一项对应一次）
     * 时间复杂度：O(n)，其中 n = 100
     * 空间复杂度：O(1) - 仅使用两个变量
     *
     * 计算：1 - 1/2 + 1/3 - 1/4 + ... + 1/99 - 1/100
     * 结果：约 0.688172179310195
     *
     * 适用场景：代码可读性强，适合学习基本循环模式
     * 权衡：实现直观但需要完整的 100 次迭代
     */
}
