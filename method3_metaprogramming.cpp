#include "method3_metaprogramming.h"

double calculateMetaprogramming() {
    // The calculation happens at COMPILE-TIME!
    // At runtime, this is just returning a pre-calculated constant.
    // The compiler has already computed AlternatingSum<100>::value
    // during compilation.

    return AlternatingSum<100>::value;

    /*
     * METHOD 3: Template Metaprogramming (The Magician)
     *
     * Compile-Time Computation:
     *   - Uses recursive template instantiation (see header file)
     *   - Compiler calculates the result DURING compilation
     *   - At runtime, this is simply loading a constant value
     *   - Zero runtime computational cost!
     *
     * How it works:
     *   - AlternatingSum<100> triggers AlternatingSum<99>, which triggers <98>...
     *   - Each template computes its term and adds to previous
     *   - Base case: AlternatingSum<0>::value = 0.0
     *   - All 100 terms summed at compile-time
     *
     * Time Complexity: O(0) runtime! O(n) compile-time
     * Space Complexity: O(1) runtime - just one constant
     *
     * Best for: Showing off C++ power, performance-critical code
     * Trade-off: Longer compilation time, complex template syntax
     * Note: Check assembly code - no loops, just a constant load!
     */

    /*
     * 方法 3：模板元编程法（魔术师方法）
     *
     * 编译时计算：
     *   - 使用递归模板实例化（参见头文件）
     *   - 编译器在编译期间计算结果
     *   - 运行时仅需加载一个常量值
     *   - 零运行时计算成本！
     *
     * 工作原理：
     *   - AlternatingSum<100> 触发 AlternatingSum<99>，依次触发 <98>...
     *   - 每个模板计算其项并加到前一项
     *   - 基础情况：AlternatingSum<0>::value = 0.0
     *   - 所有 100 项在编译时求和
     *
     * 时间复杂度：运行时 O(0)！编译时 O(n)
     * 空间复杂度：运行时 O(1) - 仅一个常量
     *
     * 适用场景：展示 C++ 强大功能，性能关键代码
     * 权衡：编译时间较长，模板语法复杂
     * 注意：查看汇编代码 - 无循环，仅常量加载！
     */
}
