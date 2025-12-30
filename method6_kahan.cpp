#include "method6_kahan.h"

double calculateKahan() {
    double sum = 0.0;
    double compensation = 0.0;  // Running compensation for lost low-order bits
    int sign = 1;

    for (int i = 1; i <= 100; ++i) {
        // Calculate the current term
        double term = sign * (1.0 / i);

        // Kahan summation algorithm:
        // Step 1: Adjust the term by the compensation
        double adjustedTerm = term - compensation;

        // Step 2: Add to sum (but this loses precision in low-order bits)
        double tempSum = sum + adjustedTerm;

        // Step 3: Calculate the new compensation
        // (tempSum - sum) recovers the high-order part of adjustedTerm
        // Subtracting this from adjustedTerm gives us what was lost
        compensation = (tempSum - sum) - adjustedTerm;

        // Step 4: Update sum
        sum = tempSum;

        // Flip sign for next iteration
        sign = -sign;
    }

    return sum;

    /*
     * METHOD 6: Kahan Summation Algorithm (The Precision Expert)
     *
     * Invented by: William Kahan (1965), Turing Award Winner (1989)
     * Also known as: Compensated summation
     *
     * Problem Solved:
     *   When adding many floating-point numbers, small values get "lost"
     *   due to limited precision. Standard summation accumulates rounding errors.
     *
     * How Kahan Algorithm Works:
     *   1. Maintain a "compensation" variable tracking lost low-order bits
     *   2. Before adding each term, adjust it by the compensation
     *   3. After addition, calculate what was lost (new compensation)
     *   4. Apply compensation to next term
     *
     * Algorithm Steps (per iteration):
     *   adjustedTerm = term - compensation    // Compensate for previous loss
     *   tempSum = sum + adjustedTerm          // Add (loses precision)
     *   compensation = (tempSum - sum) - adjustedTerm  // Capture what was lost
     *   sum = tempSum                         // Update sum
     *
     * Time Complexity: O(n) - same as naive, but ~4x more operations per term
     * Space Complexity: O(1) - just one extra compensation variable
     *
     * Accuracy Improvement: Reduces rounding error by order of magnitude
     * Used in: Scientific computing, financial calculations, NASA, computer graphics
     *
     * Best for: Maximum numerical accuracy when precision is critical
     * Trade-off: Slightly slower (more operations), but significantly more accurate
     */

    /*
     * 方法 6：Kahan 求和算法（精度专家方法）
     *
     * 发明者：William Kahan（1965 年），图灵奖得主（1989 年）
     * 又称：补偿求和
     *
     * 解决的问题：
     *   当累加多个浮点数时，由于精度有限，小值会"丢失"。
     *   标准求和会累积舍入误差。
     *
     * Kahan 算法工作原理：
     *   1. 维护一个"补偿"变量，跟踪丢失的低位
     *   2. 在添加每项之前，用补偿调整该项
     *   3. 添加后，计算丢失的部分（新补偿）
     *   4. 将补偿应用到下一项
     *
     * 算法步骤（每次迭代）：
     *   adjustedTerm = term - compensation    // 补偿先前的损失
     *   tempSum = sum + adjustedTerm          // 相加（会损失精度）
     *   compensation = (tempSum - sum) - adjustedTerm  // 捕获损失的部分
     *   sum = tempSum                         // 更新总和
     *
     * 时间复杂度：O(n) - 与朴素方法相同，但每项约 4 倍操作
     * 空间复杂度：O(1) - 仅一个额外的补偿变量
     *
     * 精度提升：将舍入误差减少一个数量级
     * 应用领域：科学计算、金融计算、NASA、计算机图形学
     *
     * 适用场景：需要最大数值精度的关键应用
     * 权衡：稍慢（更多操作），但精度显著提高
     */
}
