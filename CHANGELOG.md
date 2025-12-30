# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [Unreleased]

### Planned Features
- Unit testing framework
- Performance profiling tools
- Parallel computation methods
- GPU acceleration support

## [1.0.0] - 2025-12-29

### Added
- Initial release of Alternative Series Calculator
- 7 different calculation methods:
  - Method 0: Sign Toggle (Classic approach)
  - Method 1: Mathematical optimization (H_100 - H_50)
  - Method 2: STL & Lambda (Modern C++)
  - Method 3: Template Metaprogramming (Compile-time)
  - Method 4: Recursive function approach
  - Method 5: Precision testing suite
  - Method 6: Kahan summation algorithm
- Interactive menu system with ANSI color support
- Performance benchmarking functionality
- Comprehensive documentation:
  - README.md
  - VISUAL_STUDIO_SETUP.md
  - GITHUB_SETUP.md
  - CONTRIBUTING.md
  - LICENSE (MIT)
- Modular header/source file organization
- Git workflow with feature branching

### Technical Details
- Language: C++ (C++17 standard)
- Platform: Windows (Visual Studio 2022)
- Architecture: x86/x64
- Build System: Visual Studio MSBuild

### Features
- Calculates: 1 - 1/2 + 1/3 - 1/4 + ... + 1/99 - 1/100
- Expected result: ~0.688172179310195
- Microsecond-precision timing
- Float vs double vs long double comparison
- Educational code comments
- Clean code organization

### Documentation
- Step-by-step Visual Studio setup guide
- Complete GitHub workflow instructions
- Contribution guidelines
- Comprehensive README with examples
- Inline code documentation

---

## Version History

**[1.0.0]** - 2025-12-29 - Initial public release

---

## Upcoming Releases

### [1.1.0] - Planned
- Add Method 7: OpenMP parallel computation
- Add Method 8: SIMD vectorization
- Unit tests with Google Test
- CI/CD pipeline with GitHub Actions

### [1.2.0] - Planned
- GUI version using Qt or wxWidgets
- CSV export functionality
- Convergence visualization graphs
- Extended precision support

### [2.0.0] - Future
- Cross-platform support (Linux, macOS)
- CMake build system
- GPU acceleration (CUDA)
- Web interface (WebAssembly)

---

**For detailed changes, see the commit history:**
https://github.com/pattang56892/alternativeSeries_C-/commits/main

**Report issues:**
https://github.com/pattang56892/alternativeSeries_C-/issues

---

**Maintainer:** Patrick Tang ([@pattang56892](https://github.com/pattang56892))
