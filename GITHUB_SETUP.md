# GitHub Setup Guide

## Complete Guide to Push Your Project to GitHub

Your repository: **https://github.com/pattang56892/alternativeSeries_C-**

---

## Prerequisites

Before starting, ensure you have:

- ✅ Git installed on your system
- ✅ GitHub account (pattang56892)
- ✅ Repository created: `alternativeSeries_C-`

### Check if Git is Installed

Open **Command Prompt** or **PowerShell** and run:

```bash
git --version
```

If Git is not installed, download from: https://git-scm.com/

---

## Step-by-Step GitHub Setup

### Step 1: Configure Git (First Time Only)

Open **Command Prompt** or **PowerShell** and configure your identity:

```bash
git config --global user.name "pattang56892"
git config --global user.email "your-email@gmail.com"
```

Replace `your-email@gmail.com` with your actual GitHub email.

### Step 2: Navigate to Project Directory

```bash
cd "C:\Users\patta\Downloads\programming\C++\Project3\AlternativeSeries"
```

### Step 3: Initialize Git Repository

```bash
git init
```

This creates a `.git` folder in your project directory.

### Step 4: Create .gitignore File

Create a file named `.gitignore` to exclude Visual Studio build files:

**Option A: Using PowerShell**
```powershell
@"
# Visual Studio
.vs/
*.user
*.suo
*.sln
*.vcxproj
*.vcxproj.filters
*.vcxproj.user
Debug/
Release/
x64/
x86/
bin/
obj/
*.db
*.opendb
*.ipch

# Compiled files
*.exe
*.obj
*.pdb
*.ilk
*.log

# OS files
.DS_Store
Thumbs.db
"@ | Out-File -Encoding UTF8 .gitignore
```

**Option B: Manually**
1. Create a file named `.gitignore` (note the dot at the beginning)
2. Copy the content shown above into it

### Step 5: Add All Files to Staging

```bash
git add .
```

This stages all files (except those in `.gitignore`) for commit.

### Step 6: Create Initial Commit

```bash
git commit -m "Initial commit: Alternative Series Calculator with 7 methods

- Method 0: Sign Toggle (Original)
- Method 1: Mathematical (H_100 - H_50 optimization)
- Method 2: STL & Lambda (Modern C++)
- Method 3: Template Metaprogramming (Compile-time)
- Method 4: Recursive (Educational)
- Method 5: Precision Test (Float vs Double vs Long Double)
- Method 6: Kahan Summation (Numerical stability)
- Interactive menu system with benchmarking

Calculate: 1 - 1/2 + 1/3 - 1/4 + ... + 1/99 - 1/100"
```

### Step 7: Add Remote Repository

```bash
git remote add origin https://github.com/pattang56892/alternativeSeries_C-.git
```

### Step 8: Push to GitHub

**If this is a brand new repository:**
```bash
git branch -M main
git push -u origin main
```

**If the repository already has content:**
```bash
git pull origin main --allow-unrelated-histories
git push -u origin main
```

---

## Verify Upload

1. Go to: https://github.com/pattang56892/alternativeSeries_C-
2. You should see all your source files:
   - main.cpp
   - All method files (.h and .cpp)
   - README files

---

## Future Updates (After Initial Push)

### When you make changes to your code:

```bash
# 1. Navigate to project directory
cd "C:\Users\patta\Downloads\programming\C++\Project3\AlternativeSeries"

# 2. Check what changed
git status

# 3. Add all changes
git add .

# 4. Commit with descriptive message
git commit -m "Description of what you changed"

# 5. Push to GitHub
git push
```

### Example: After fixing a bug

```bash
git add .
git commit -m "Fix: Corrected sign error in recursive method"
git push
```

---

## Creating a README for GitHub

Create a `README.md` file to display on your GitHub page:

```bash
# Navigate to project directory (if not already there)
cd "C:\Users\patta\Downloads\programming\C++\Project3\AlternativeSeries"
```

Then create README.md with this content:

```markdown
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
├── main.cpp                    # Interactive menu system
├── method0_signToggle.h/cpp    # Sign toggle approach
├── method1_mathematical.h/cpp  # Mathematical optimization
├── method2_stlLambda.h/cpp     # STL & Lambda
├── method3_metaprogramming.h/cpp # Template metaprogramming
├── method4_recursive.h/cpp     # Recursive approach
├── method5_precisionTest.h/cpp # Precision analysis
├── method6_kahan.h/cpp         # Kahan summation
└── README.md
```

## 🛠️ How to Build & Run

### Requirements
- Visual Studio 2022 (or newer)
- C++17 or newer standard

### Instructions
1. Clone this repository
2. Open Visual Studio
3. Create new Empty C++ Project
4. Add all files to project
5. Set C++ Language Standard to C++17 or newer
6. Build (F7) and Run (Ctrl+F5)

See **VISUAL_STUDIO_SETUP.md** for detailed instructions.

## 💻 Usage

Run the program and select from the menu:

```
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

Option [7] runs all methods and displays:
- Execution time (microseconds)
- Result accuracy
- Fastest method
- Precision comparison

## 🎓 Educational Value

This project teaches:
- ✅ Multiple problem-solving approaches
- ✅ Algorithm optimization
- ✅ Modern C++ features (STL, lambdas)
- ✅ Template metaprogramming
- ✅ Recursion concepts
- ✅ Floating-point precision
- ✅ Numerical stability algorithms

## 🏆 Highlights

- **Mathematical Insight**: H₁₀₀ - H₅₀ reduces iterations by 50%
- **Compile-Time Magic**: Metaprogramming = zero runtime cost
- **Numerical Precision**: Kahan algorithm minimizes floating-point errors
- **Modern C++**: Demonstrates C++17 features

## 📖 Related Concepts

- Alternating Harmonic Series
- Harmonic Numbers
- Floating-Point Arithmetic
- Template Metaprogramming
- Kahan Summation Algorithm

## 👨‍💻 Author

**Patrick Tang** (pattang56892)

## 📄 License

MIT License - feel free to use for educational purposes!

## 🔗 Links

- [GitHub Repository](https://github.com/pattang56892/alternativeSeries_C-)
- [My GitHub Profile](https://github.com/pattang56892)

---

**⭐ Star this repo if you found it helpful!**
```

Save this to a file named `README.md` in your project directory, then:

```bash
git add README.md
git commit -m "Add comprehensive README documentation"
git push
```

---

## Troubleshooting

### Issue 1: "fatal: remote origin already exists"
```bash
git remote remove origin
git remote add origin https://github.com/pattang56892/alternativeSeries_C-.git
```

### Issue 2: Authentication Failed
GitHub no longer accepts password authentication. Use one of these:

**Option A: GitHub Desktop**
1. Download GitHub Desktop
2. Sign in with your account
3. Add local repository
4. Push from GUI

**Option B: Personal Access Token**
1. Go to GitHub → Settings → Developer settings → Personal access tokens
2. Generate new token (classic)
3. Use token as password when pushing

**Option C: SSH Key**
```bash
ssh-keygen -t ed25519 -C "your-email@gmail.com"
# Add public key to GitHub settings
git remote set-url origin git@github.com:pattang56892/alternativeSeries_C-.git
```

### Issue 3: "Repository not found"
Make sure the repository exists at:
https://github.com/pattang56892/alternativeSeries_C-

### Issue 4: Large files blocked
GitHub has a 100MB file size limit. Make sure `.gitignore` excludes:
- .vs/ folder
- Debug/ and Release/ folders
- .exe files

---

## Useful Git Commands

```bash
# Check status
git status

# View commit history
git log --oneline

# Create a new branch
git checkout -b feature-name

# Switch branches
git checkout main

# Merge branch
git merge feature-name

# Undo last commit (keep changes)
git reset --soft HEAD~1

# View remote URL
git remote -v

# Pull latest changes
git pull
```

---

## Next Steps After Push

1. ✅ Go to GitHub and verify all files are uploaded
2. ✅ Check that README displays correctly
3. ✅ Add repository description and topics on GitHub
4. ✅ Consider adding:
   - LICENSE file (MIT recommended)
   - CONTRIBUTING.md
   - Issues templates

---

**Congratulations! Your project is now on GitHub! 🎉**

**Repository:** https://github.com/pattang56892/alternativeSeries_C-

**Author:** Patrick Tang (pattang56892)
