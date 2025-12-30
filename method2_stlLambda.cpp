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

    /*
     * METHOD 2: STL & Lambda Approach (The Modernist)
     *
     * Functional Programming Style:
     *   - Separates data generation (std::iota) from computation (std::accumulate)
     *   - Uses lambda expressions for inline logic
     *   - Avoids raw for loops (modern C++ best practice)
     *
     * Algorithm:
     *   1. Generate sequence [1, 2, 3, ..., 100] with std::iota
     *   2. Fold/reduce using std::accumulate with lambda
     *   3. Lambda checks odd/even to determine sign
     *
     * Time Complexity: O(n) where n = 100
     * Space Complexity: O(n) - stores vector of 100 integers
     *
     * Best for: Modern C++ enthusiasts, functional programming advocates
     * Trade-off: Elegant code but uses more memory (vector storage)
     */

    /*
     * 方法 2：STL 与 Lambda 表达式法（现代派方法）
     *
     * 函数式编程风格：
     *   - 将数据生成（std::iota）与计算（std::accumulate）分离
     *   - 使用 lambda 表达式实现内联逻辑
     *   - 避免原始 for 循环（现代 C++ 最佳实践）
     *
     * 算法：
     *   1. 使用 std::iota 生成序列 [1, 2, 3, ..., 100]
     *   2. 使用带 lambda 的 std::accumulate 进行折叠/归约
     *   3. Lambda 检查奇偶性以确定符号
     *
     * 时间复杂度：O(n)，其中 n = 100
     * 空间复杂度：O(n) - 存储 100 个整数的向量
     *
     * 适用场景：现代 C++ 爱好者，函数式编程倡导者
     * 权衡：代码优雅但使用更多内存（向量存储）
     */
}
