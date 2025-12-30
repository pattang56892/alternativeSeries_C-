# Contributing to Alternative Series Calculator

Thank you for your interest in contributing to this project! This document provides guidelines for contributing.

## How to Contribute

### Reporting Issues

If you find a bug or have a suggestion:

1. Check if the issue already exists in the [Issues](https://github.com/pattang56892/alternativeSeries_C-/issues) section
2. If not, create a new issue with:
   - Clear title and description
   - Steps to reproduce (for bugs)
   - Expected vs actual behavior
   - Your environment (OS, Visual Studio version, compiler)

### Suggesting Enhancements

Have an idea for a new calculation method or feature?

1. Open an issue tagged as "enhancement"
2. Describe the proposed feature
3. Explain why it would be valuable
4. Provide examples if applicable

## Pull Request Process

### 1. Fork and Clone

```bash
git clone https://github.com/YOUR-USERNAME/alternativeSeries_C-.git
cd alternativeSeries_C-
```

### 2. Create a Feature Branch

```bash
git checkout -b feature/your-feature-name
```

Branch naming conventions:
- `feature/` - New features
- `fix/` - Bug fixes
- `docs/` - Documentation updates
- `refactor/` - Code refactoring

### 3. Make Your Changes

Follow these guidelines:

#### Code Style
- Use consistent indentation (4 spaces)
- Follow existing naming conventions
- Add comments for complex logic
- Keep functions focused and modular

#### For New Methods
If adding a new calculation method:

1. Create `methodX_name.h` and `methodX_name.cpp`
2. Follow the existing method structure:
   ```cpp
   // methodX_name.h
   #ifndef METHODX_NAME_H
   #define METHODX_NAME_H

   /**
    * METHOD X: Name (Description)
    * ...documentation...
    */

   double calculateMethodName();

   #endif
   ```

3. Add to main.cpp menu system
4. Update README.md with method description

#### Documentation
- Update README.md if adding features
- Add code comments explaining "why", not just "what"
- Update VISUAL_STUDIO_SETUP.md if changing build process

### 4. Test Your Changes

Before submitting:

- ✅ Code compiles without errors
- ✅ Code runs without crashes
- ✅ New methods produce correct results
- ✅ Performance is reasonable
- ✅ Documentation is updated

Test on:
- Debug configuration
- Release configuration
- Both x86 and x64 platforms (if applicable)

### 5. Commit Your Changes

```bash
git add .
git commit -m "Brief description of changes

- Detailed point 1
- Detailed point 2
- Detailed point 3"
```

Commit message guidelines:
- Use present tense ("Add feature" not "Added feature")
- First line: brief summary (50 chars or less)
- Blank line, then detailed description
- Reference issue numbers if applicable

### 6. Push to Your Fork

```bash
git push origin feature/your-feature-name
```

### 7. Submit Pull Request

1. Go to the original repository
2. Click "New Pull Request"
3. Select your fork and branch
4. Fill in the PR template:
   - Description of changes
   - Why this change is needed
   - How you tested it
   - Screenshots (if UI changes)

## Code Review Process

1. Maintainer will review your PR
2. Feedback may be requested
3. Make requested changes if needed
4. Once approved, PR will be merged

## Ideas for Contributions

### New Methods to Implement

- **Method 7:** Parallel computation (OpenMP)
- **Method 8:** SIMD vectorization
- **Method 9:** GPU acceleration (CUDA)
- **Method 10:** Arbitrary precision (GMP library)
- **Method 11:** Taylor series approximation
- **Method 12:** Continued fraction representation

### Enhancements

- Unit testing framework (Google Test, Catch2)
- Performance profiling tools
- Graphical visualization of convergence
- Web assembly port
- Command-line argument parsing
- Configuration file support
- Output to CSV/JSON
- Comparison with ln(2) convergence

### Documentation

- Tutorial videos
- Additional examples
- Translations (other languages)
- Mathematical background explanations
- Blog posts about the project

## Questions?

Feel free to:
- Open an issue with the "question" label
- Start a discussion in the Discussions tab
- Email: (provide if you want)

## License

By contributing, you agree that your contributions will be licensed under the MIT License.

## Recognition

Contributors will be:
- Listed in README.md
- Credited in release notes
- Appreciated forever! 🙏

---

**Thank you for contributing to Alternative Series Calculator!**

**Maintainer:** Patrick Tang ([@pattang56892](https://github.com/pattang56892))
**Repository:** https://github.com/pattang56892/alternativeSeries_C-
