# Visual Studio Project Setup Guide

## Complete Step-by-Step Instructions for Visual Studio 2022

---

## Step 1: Create New Project

1. **Open Visual Studio** (NOT VS Code - this is the full Visual Studio IDE)

2. Click **"Create a new project"**

3. In the search bar, type: **"Empty Project"**

4. Select **"Empty Project"** (C++) from the list
   - Make sure it says "C++" in the description
   - DO NOT select "CLR" or ".NET" versions

5. Click **"Next"**

6. **Configure your new project:**
   - **Project name:** `AlternativeSeries`
   - **Location:** `C:\Users\patta\Downloads\programming\C++\Project3`
   - **Solution name:** `AlternativeSeries`
   - ✓ Check "Place solution and project in the same directory"

7. Click **"Create"**

---

## Step 2: Add Source Files to Project

### A. Add Header Files (.h)

1. In **Solution Explorer** (right side panel), right-click on **"Header Files"** folder
2. Click **Add → Existing Item...**
3. Navigate to `C:\Users\patta\Downloads\programming\C++\Project3\AlternativeSeries`
4. Select ALL `.h` files:
   - method0_signToggle.h
   - method1_mathematical.h
   - method2_stlLambda.h
   - method3_metaprogramming.h
   - method4_recursive.h
   - method5_precisionTest.h
   - method6_kahan.h
5. Click **"Add"**

### B. Add Source Files (.cpp)

1. In **Solution Explorer**, right-click on **"Source Files"** folder
2. Click **Add → Existing Item...**
3. Navigate to `C:\Users\patta\Downloads\programming\C++\Project3\AlternativeSeries`
4. Select ALL `.cpp` files:
   - main.cpp
   - method0_signToggle.cpp
   - method1_mathematical.cpp
   - method2_stlLambda.cpp
   - method3_metaprogramming.cpp
   - method4_recursive.cpp
   - method5_precisionTest.cpp
   - method6_kahan.cpp
5. Click **"Add"**

---

## Step 3: Configure Project Settings

### Set C++ Language Standard (Important!)

1. Right-click on the **project name** in Solution Explorer
2. Select **"Properties"** (at the bottom of the menu)
3. In the left panel, expand **Configuration Properties → C/C++ → Language**
4. Find **"C++ Language Standard"**
5. Change to **"ISO C++17 Standard (/std:c++17)"** or newer
6. Click **"Apply"** then **"OK"**

### Optional: Set Output Directories

1. Right-click project → **Properties**
2. **Configuration Properties → General**
3. Set **Output Directory** to: `$(SolutionDir)bin\$(Configuration)\`
4. Set **Intermediate Directory** to: `$(SolutionDir)obj\$(Configuration)\`
5. Click **"Apply"** then **"OK"**

---

## Step 4: Build the Project

### Build Configuration

1. At the top toolbar, make sure you select:
   - **Configuration:** `Debug` (for development) or `Release` (for final version)
   - **Platform:** `x64` (recommended) or `x86`

2. **Build the project:**
   - Press **F7** OR
   - Click **Build → Build Solution** OR
   - Right-click project → **Build**

3. **Check for errors:**
   - View the **Output** window (View → Output)
   - Should see: `Build succeeded`

---

## Step 5: Run the Program

### Three ways to run:

**Option 1: Run with Debugging**
- Press **F5**
- Allows you to set breakpoints and debug

**Option 2: Run without Debugging (Recommended)**
- Press **Ctrl + F5**
- Console window stays open after program finishes
- **This is the best option for our interactive menu!**

**Option 3: Run from Menu**
- Click **Debug → Start Without Debugging**

---

## Expected Project Structure in Solution Explorer

```
AlternativeSeries (Solution)
└── AlternativeSeries (Project)
    ├── Header Files
    │   ├── method0_signToggle.h
    │   ├── method1_mathematical.h
    │   ├── method2_stlLambda.h
    │   ├── method3_metaprogramming.h
    │   ├── method4_recursive.h
    │   ├── method5_precisionTest.h
    │   └── method6_kahan.h
    ├── Source Files
    │   ├── main.cpp
    │   ├── method0_signToggle.cpp
    │   ├── method1_mathematical.cpp
    │   ├── method2_stlLambda.cpp
    │   ├── method3_metaprogramming.cpp
    │   ├── method4_recursive.cpp
    │   ├── method5_precisionTest.cpp
    │   └── method6_kahan.cpp
    └── Resource Files (empty)
```

---

## Troubleshooting Common Issues

### Issue 1: "Cannot open include file"
**Solution:** Make sure all header files are in the same directory as the .cpp files.

### Issue 2: "Unresolved external symbol"
**Solution:** Check that all .cpp files are added to the project (not just the headers).

### Issue 3: "C++ standard version error"
**Solution:** Follow Step 3 to set C++17 or newer.

### Issue 4: Console closes immediately
**Solution:** Use **Ctrl + F5** instead of F5, or add `system("pause");` before `return 0;`.

### Issue 5: "'std::accumulate' is not a member of 'std'"
**Solution:** Make sure `#include <numeric>` is in the file (already done in method2_stlLambda.cpp).

---

## Next Steps

After successful build:

1. ✅ Run the program (Ctrl + F5)
2. ✅ Test each method from the interactive menu
3. ✅ Try option [7] to benchmark all methods
4. ✅ Experiment with the code
5. ✅ Push to GitHub (see GITHUB_SETUP.md)

---

## Testing Checklist

- [ ] Project builds without errors
- [ ] Program runs and shows menu
- [ ] Method 0 (Sign Toggle) works
- [ ] Method 1 (Mathematical) works
- [ ] Method 2 (STL Lambda) works
- [ ] Method 3 (Metaprogramming) works
- [ ] Method 4 (Recursive) works
- [ ] Method 5 (Precision Test) works
- [ ] Method 6 (Kahan) works
- [ ] Option 7 (Run All) works
- [ ] All methods produce same result

**Expected Result:** `~0.688172179310195`

---

## Visual Studio Keyboard Shortcuts

| Shortcut | Action |
|----------|--------|
| **Ctrl + F5** | Run without debugging (BEST for this project) |
| **F5** | Run with debugging |
| **F7** | Build solution |
| **Ctrl + Shift + B** | Build solution (alternative) |
| **F9** | Toggle breakpoint |
| **Ctrl + K, Ctrl + C** | Comment selection |
| **Ctrl + K, Ctrl + U** | Uncomment selection |
| **Ctrl + M, Ctrl + O** | Collapse all code blocks |
| **Ctrl + M, Ctrl + L** | Expand all code blocks |

---

## Advanced: Testing Individual Methods

If you want to test just one method, you can:

1. **Comment out the menu system** in main.cpp
2. **Add simple test code:**

```cpp
int main() {
    cout << "Testing Method 0: " << calculateSignToggle() << endl;
    cout << "Testing Method 1: " << calculateMathematical() << endl;
    // etc.
    return 0;
}
```

3. **Or create a separate test file** (right-click Source Files → Add → New Item → C++ File)

---

## Need Help?

If you encounter issues:

1. Check the **Error List** window (View → Error List)
2. Read error messages carefully
3. Google the specific error message
4. Check that all files are in the correct location
5. Ensure C++17 or newer is enabled

**GitHub Issues:** https://github.com/pattang56892/alternativeSeries_C-/issues

---

**Author:** Patrick Tang (pattang56892)
**Project:** Alternative Series Calculator
**GitHub:** https://github.com/pattang56892/alternativeSeries_C-
