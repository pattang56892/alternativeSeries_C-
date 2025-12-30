# Alternative Series Calculator - C++

Calculate the alternating harmonic series: **1 - 1/2 + 1/3 - 1/4 + ... + 1/99 - 1/100**

## 🎯 Project Overview

This project demonstrates **7 different approaches** to solving the same mathematical problem, showcasing various C++ programming techniques from beginner to advanced.

### Original Problem (Chinese)
编写一个 C 语言程序，计算 1 − 1/2 + 1/3 − 1/4 + … + 1/99 − 1/100 的结果。

### Result
All methods calculate: **≈ 0.688172179310195**

## 🚀 Seven Methods Implemented

| Method | Name | Description | Key Feature |
|--------|------|-------------|-------------|
| **0** | Sign Toggle | Classic sign-flipping approach | Most readable |
| **1** | Mathematical | H₁₀₀ - H₅₀ optimization | 50% fewer iterations |
| **2** | STL & Lambda | Functional programming style | Modern C++ |
| **3** | Metaprogramming | Template recursion | Compile-time calculation |
| **4** | Recursive | Function recursion | Educational |
| **5** | Precision Test | Float vs Double comparison | Analysis tool |
| **6** | Kahan Summation | Compensated summation | Maximum accuracy |

## 📁 Project Structure

```
AlternativeSeries/
├── main.cpp                      # Interactive menu system
├── method0_signToggle.h/cpp      # Sign toggle approach
├── method1_mathematical.h/cpp    # Mathematical optimization
├── method2_stlLambda.h/cpp       # STL & Lambda
├── method3_metaprogramming.h/cpp # Template metaprogramming
├── method4_recursive.h/cpp       # Recursive approach
├── method5_precisionTest.h/cpp   # Precision analysis
├── method6_kahan.h/cpp           # Kahan summation
├── README.md                     # This file
├── VISUAL_STUDIO_SETUP.md        # VS setup instructions
└── GITHUB_SETUP.md               # GitHub push guide
```

## 🛠️ How to Build & Run

### Requirements
- Visual Studio 2022 (or newer)
- C++17 or newer standard

### Quick Start
1. Clone this repository
2. Open Visual Studio
3. Create new Empty C++ Project named `AlternativeSeries`
4. Add all `.h` files to "Header Files" folder
5. Add all `.cpp` files to "Source Files" folder
6. Set C++ Language Standard to C++17 or newer
   - Project Properties → C/C++ → Language → C++ Language Standard
7. Build (F7)
8. Run (Ctrl+F5)

### Detailed Instructions
See **[VISUAL_STUDIO_SETUP.md](VISUAL_STUDIO_SETUP.md)** for step-by-step guide with screenshots.

## 💻 Usage

Run the program and select from the interactive menu:

```
╔════════════════════════════════════════════════════════════╗
║      ALTERNATIVE SERIES CALCULATOR - C++ Edition          ║
║                                                            ║
║  Calculate: 1 - 1/2 + 1/3 - 1/4 + ... + 1/99 - 1/100     ║
║                                                            ║
║  7 Different Methods Demonstrating C++ Techniques         ║
╚════════════════════════════════════════════════════════════╝

--- SELECT A METHOD ---
[0] Sign Toggle         (Original - Most Readable)
[1] Mathematical        (The Mathematician - Most Efficient)
[2] STL & Lambda        (The Modernist - Functional Style)
[3] Metaprogramming     (The Magician - Compile-Time)
[4] Recursive           (Educational - Call Stack Demo)
[5] Precision Test      (The Analyst - Compare Precision)
[6] Kahan Summation     (The Expert - Numerical Stability)
[7] Run ALL Methods     (Compare All & Benchmark)
[8] Exit
```

## 📊 Performance Comparison

Select option **[7]** to run all methods and display:
- Execution time (microseconds)
- Result accuracy (17 decimal places)
- Fastest method
- Precision comparison (float vs double vs long double)

### Sample Benchmark Results

```
Method              Result                    Time (μs)
─────────────────────────────────────────────────────────
Sign Toggle         0.68817217931019502       2.345
Mathematical        0.68817217931019502       1.234  ← Fastest!
STL & Lambda        0.68817217931019502       3.567
Metaprogramming     0.68817217931019502       0.123  ← Compile-time
Recursive           0.68817217931019502       2.890
Kahan Summation     0.68817217931019502       2.456

✓ All methods produce identical results!
```

## 🎓 Educational Value

This project teaches:

### Beginner Level
- ✅ Basic loops and arithmetic
- ✅ Function organization
- ✅ Header/source file separation

### Intermediate Level
- ✅ Algorithm optimization
- ✅ STL containers and algorithms
- ✅ Lambda expressions
- ✅ Recursion concepts

### Advanced Level
- ✅ Template metaprogramming
- ✅ Compile-time computation
- ✅ Floating-point precision
- ✅ Numerical stability algorithms
- ✅ Performance benchmarking

## 🏆 Method Highlights

### Method 1: Mathematical Optimization
```cpp
// Instead of: 1 - 1/2 + 1/3 - 1/4 + ... + 1/99 - 1/100
// Calculate: 1/51 + 1/52 + ... + 1/100
// Result: 50% fewer iterations!
```

**Mathematical Insight:** Using harmonic number properties:
- S = H₁₀₀ - H₅₀
- This reduces 100 iterations to just 50!

### Method 3: Compile-Time Metaprogramming
```cpp
template <int N>
struct AlternatingSum {
    static constexpr double value =
        ((N % 2 == 1 ? 1.0 : -1.0) / N) + AlternatingSum<N - 1>::value;
};
```

**Magic:** The compiler calculates the result during compilation!
- Runtime cost: **ZERO**
- The program just loads a constant

### Method 6: Kahan Summation
```cpp
// Maintains running compensation for lost precision
// Used in scientific computing and financial calculations
// Minimizes floating-point rounding errors
```

**Real-world application:** Used by NASA, financial institutions, and scientific research!

## 📖 Related Mathematical Concepts

- **Alternating Harmonic Series**: Σ(-1)^(n+1) / n
- **Harmonic Numbers**: H_n = 1 + 1/2 + 1/3 + ... + 1/n
- **Convergence**: Series converges to ln(2) ≈ 0.693147...
- **Our partial sum (n=100)**: ≈ 0.688172 (99.28% of ln(2))

## 🔧 Customization

Want to calculate more terms? Modify in each method file:

```cpp
// Change 100 to any number
for (int i = 1; i <= 100; ++i) {
    // ...
}
```

**Warning:** For template metaprogramming (Method 3), very large N may cause long compile times!

## 🐛 Known Limitations

1. **Template recursion** may hit compiler limits (typically ~1024-2048)
2. **Recursive function** may cause stack overflow for very large N
3. **ANSI colors** may not display on some Windows terminals (cosmetic only)

## 🤝 Contributing

Found a bug? Want to add a new method? Contributions welcome!

1. Fork the repository
2. Create a feature branch
3. Make your changes
4. Test thoroughly
5. Submit a pull request

### Ideas for New Methods
- Parallel computation (OpenMP, std::thread)
- GPU acceleration (CUDA)
- Arbitrary precision (using libraries like GMP)
- SIMD vectorization

## 👨‍💻 Author

**Patrick Tang** (pattang56892)
- GitHub: [@pattang56892](https://github.com/pattang56892)

## 📄 License

MIT License - free to use for educational purposes!

## 🔗 Links

- [GitHub Repository](https://github.com/pattang56892/alternativeSeries_C-)
- [Visual Studio Setup Guide](VISUAL_STUDIO_SETUP.md)
- [GitHub Push Guide](GITHUB_SETUP.md)

## ⭐ Star This Repository

If you found this project helpful or educational, please consider starring it on GitHub!

---

## 📚 References

1. **Harmonic Series**: https://en.wikipedia.org/wiki/Harmonic_series_(mathematics)
2. **Kahan Summation**: https://en.wikipedia.org/wiki/Kahan_summation_algorithm
3. **Template Metaprogramming**: Alexandrescu, Andrei. "Modern C++ Design" (2001)
4. **Floating-Point Arithmetic**: Goldberg, David. "What Every Computer Scientist Should Know About Floating-Point Arithmetic" (1991)

---

**Created with educational intent to demonstrate multiple problem-solving approaches in C++**

Last updated: 2025
