/**
 * ALTERNATIVE SERIES CALCULATOR
 * =============================
 * Calculates: 1 - 1/2 + 1/3 - 1/4 + ... + 1/99 - 1/100
 *
 * Original Problem (Chinese):
 * 编写一个 C 语言程序，计算 1 − 1/2 + 1/3 − 1/4 + … + 1/99 − 1/100 的结果。
 *
 * This project demonstrates 7 different approaches to solving
 * the same mathematical problem, showcasing various C++ techniques.
 *
 * Author: Patrick Tang (pattang56892)
 * GitHub: https://github.com/pattang56892/alternativeSeries_C-
 */

#include <iostream>
#include <iomanip>
#include <chrono>
#include <string>

// Include all method headers
#include "method0_signToggle.h"
#include "method1_mathematical.h"
#include "method2_stlLambda.h"
#include "method3_metaprogramming.h"
#include "method4_recursive.h"
#include "method5_precisionTest.h"
#include "method6_kahan.h"

using namespace std;

// ANSI color codes for better output formatting
const string RESET = "\033[0m";
const string BOLD = "\033[1m";
const string CYAN = "\033[36m";
const string GREEN = "\033[32m";
const string YELLOW = "\033[33m";
const string MAGENTA = "\033[35m";
const string RED = "\033[31m";

void printHeader() {
    cout << CYAN << BOLD;
    cout << "\n╔════════════════════════════════════════════════════════════╗\n";
    cout << "║      ALTERNATIVE SERIES CALCULATOR - C++ Edition          ║\n";
    cout << "║                                                            ║\n";
    cout << "║  Calculate: 1 - 1/2 + 1/3 - 1/4 + ... + 1/99 - 1/100     ║\n";
    cout << "║                                                            ║\n";
    cout << "║  7 Different Methods Demonstrating C++ Techniques         ║\n";
    cout << "╚════════════════════════════════════════════════════════════╝\n";
    cout << RESET << "\n";
}

void printMenu() {
    cout << YELLOW << BOLD << "\n--- SELECT A METHOD ---\n" << RESET;
    cout << GREEN << "[0]" << RESET << " Sign Toggle         (Original - Most Readable)\n";
    cout << GREEN << "[1]" << RESET << " Mathematical        (The Mathematician - Most Efficient)\n";
    cout << GREEN << "[2]" << RESET << " STL & Lambda        (The Modernist - Functional Style)\n";
    cout << GREEN << "[3]" << RESET << " Metaprogramming     (The Magician - Compile-Time)\n";
    cout << GREEN << "[4]" << RESET << " Recursive           (Educational - Call Stack Demo)\n";
    cout << GREEN << "[5]" << RESET << " Precision Test      (The Analyst - Compare Precision)\n";
    cout << GREEN << "[6]" << RESET << " Kahan Summation     (The Expert - Numerical Stability)\n";
    cout << GREEN << "[7]" << RESET << " Run ALL Methods     (Compare All & Benchmark)\n";
    cout << RED << "[8]" << RESET << " Exit\n";
    cout << MAGENTA << "\nEnter your choice: " << RESET;
}

void printMethodInfo(int methodNum) {
    cout << CYAN << "\n┌─────────────────────────────────────────┐\n" << RESET;

    switch (methodNum) {
    case 0:
        cout << BOLD << "  METHOD 0: Sign Toggle\n" << RESET;
        cout << "  Uses: Sign flipping (-1)^n pattern\n";
        cout << "  Iterations: 100\n";
        cout << "  Best for: Readability & learning\n";
        break;
    case 1:
        cout << BOLD << "  METHOD 1: Mathematical\n" << RESET;
        cout << "  Uses: H_100 - H_50 = Σ(1/i) from i=51 to 100\n";
        cout << "  Iterations: 50 (50% faster!)\n";
        cout << "  Best for: Performance optimization\n";
        break;
    case 2:
        cout << BOLD << "  METHOD 2: STL & Lambda\n" << RESET;
        cout << "  Uses: std::accumulate + lambda function\n";
        cout << "  Style: Functional programming\n";
        cout << "  Best for: Modern C++ enthusiasts\n";
        break;
    case 3:
        cout << BOLD << "  METHOD 3: Metaprogramming\n" << RESET;
        cout << "  Uses: Template recursion\n";
        cout << "  Computation: Compile-time (zero runtime!)\n";
        cout << "  Best for: Showing off C++ power\n";
        break;
    case 4:
        cout << BOLD << "  METHOD 4: Recursive\n" << RESET;
        cout << "  Uses: Function recursion\n";
        cout << "  Stack depth: 100 calls\n";
        cout << "  Best for: Understanding recursion\n";
        break;
    case 5:
        cout << BOLD << "  METHOD 5: Precision Test\n" << RESET;
        cout << "  Compares: float vs double vs long double\n";
        cout << "  Purpose: Demonstrate precision differences\n";
        cout << "  Best for: Understanding floating-point\n";
        break;
    case 6:
        cout << BOLD << "  METHOD 6: Kahan Summation\n" << RESET;
        cout << "  Uses: Compensated summation algorithm\n";
        cout << "  Invented by: William Kahan (Turing Award)\n";
        cout << "  Best for: Maximum numerical accuracy\n";
        break;
    }

    cout << CYAN << "└─────────────────────────────────────────┘\n" << RESET;
}

void executeMethod(int methodNum) {
    printMethodInfo(methodNum);

    // For precision test, handle separately
    if (methodNum == 5) {
        auto start = chrono::high_resolution_clock::now();
        PrecisionResults results = calculatePrecisionTest();
        auto end = chrono::high_resolution_clock::now();

        results.display();

        chrono::duration<double, micro> duration = end - start;
        cout << "\nExecution time: " << duration.count() << " microseconds\n";
        return;
    }

    // Start timing
    auto start = chrono::high_resolution_clock::now();

    double result = 0.0;

    // Execute the selected method
    switch (methodNum) {
    case 0:
        result = calculateSignToggle();
        break;
    case 1:
        result = calculateMathematical();
        break;
    case 2:
        result = calculateSTLLambda();
        break;
    case 3:
        result = calculateMetaprogramming();
        break;
    case 4:
        result = calculateRecursive();
        break;
    case 6:
        result = calculateKahan();
        break;
    default:
        cout << RED << "Invalid method number!\n" << RESET;
        return;
    }

    // End timing
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double, micro> duration = end - start;

    // Display result
    cout << "\n" << GREEN << BOLD << "RESULT: " << RESET;
    cout << setprecision(17) << result << "\n";
    cout << YELLOW << "Execution time: " << RESET << duration.count() << " microseconds\n";
}

void runAllMethods() {
    cout << CYAN << BOLD << "\n╔════════════════════════════════════════════════════════════╗\n";
    cout << "║                  BENCHMARK ALL METHODS                     ║\n";
    cout << "╚════════════════════════════════════════════════════════════╝\n" << RESET;

    struct MethodResult {
        string name;
        double result;
        double time_microseconds;
    };

    MethodResult results[6];

    // Method 0: Sign Toggle
    auto start = chrono::high_resolution_clock::now();
    results[0].result = calculateSignToggle();
    auto end = chrono::high_resolution_clock::now();
    results[0].name = "Sign Toggle";
    results[0].time_microseconds = chrono::duration<double, micro>(end - start).count();

    // Method 1: Mathematical
    start = chrono::high_resolution_clock::now();
    results[1].result = calculateMathematical();
    end = chrono::high_resolution_clock::now();
    results[1].name = "Mathematical";
    results[1].time_microseconds = chrono::duration<double, micro>(end - start).count();

    // Method 2: STL Lambda
    start = chrono::high_resolution_clock::now();
    results[2].result = calculateSTLLambda();
    end = chrono::high_resolution_clock::now();
    results[2].name = "STL & Lambda";
    results[2].time_microseconds = chrono::duration<double, micro>(end - start).count();

    // Method 3: Metaprogramming
    start = chrono::high_resolution_clock::now();
    results[3].result = calculateMetaprogramming();
    end = chrono::high_resolution_clock::now();
    results[3].name = "Metaprogramming";
    results[3].time_microseconds = chrono::duration<double, micro>(end - start).count();

    // Method 4: Recursive
    start = chrono::high_resolution_clock::now();
    results[4].result = calculateRecursive();
    end = chrono::high_resolution_clock::now();
    results[4].name = "Recursive";
    results[4].time_microseconds = chrono::duration<double, micro>(end - start).count();

    // Method 6: Kahan
    start = chrono::high_resolution_clock::now();
    results[5].result = calculateKahan();
    end = chrono::high_resolution_clock::now();
    results[5].name = "Kahan Summation";
    results[5].time_microseconds = chrono::duration<double, micro>(end - start).count();

    // Display results table
    cout << "\n" << setw(20) << left << "Method"
        << setw(25) << "Result"
        << setw(20) << "Time (μs)" << "\n";
    cout << string(65, '─') << "\n";

    for (int i = 0; i < 6; i++) {
        cout << setw(20) << left << results[i].name
            << setw(25) << setprecision(17) << results[i].result
            << setw(20) << fixed << setprecision(3) << results[i].time_microseconds << "\n";
    }

    cout << string(65, '─') << "\n";

    // Find fastest method
    int fastestIndex = 0;
    for (int i = 1; i < 6; i++) {
        if (results[i].time_microseconds < results[fastestIndex].time_microseconds) {
            fastestIndex = i;
        }
    }

    cout << GREEN << "\nFastest method: " << BOLD << results[fastestIndex].name
        << RESET << GREEN << " (" << results[fastestIndex].time_microseconds << " μs)\n" << RESET;

    // Check if all results match (within floating-point precision)
    bool allMatch = true;
    const double epsilon = 1e-15;
    for (int i = 1; i < 6; i++) {
        if (abs(results[i].result - results[0].result) > epsilon) {
            allMatch = false;
            break;
        }
    }

    if (allMatch) {
        cout << GREEN << "✓ All methods produce identical results!\n" << RESET;
    }
    else {
        cout << YELLOW << "⚠ Some methods show slight precision differences\n" << RESET;
    }

    // Run precision test
    cout << "\n" << CYAN << "Running precision analysis...\n" << RESET;
    PrecisionResults precisionResults = calculatePrecisionTest();
    precisionResults.display();
}

int main() {
    printHeader();

    int choice;
    bool running = true;

    while (running) {
        printMenu();
        cin >> choice;

        // Clear input buffer
        cin.clear();
        cin.ignore(10000, '\n');

        switch (choice) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            executeMethod(choice);
            break;
        case 7:
            runAllMethods();
            break;
        case 8:
            cout << CYAN << "\nThank you for using Alternative Series Calculator!\n";
            cout << "GitHub: https://github.com/pattang56892/alternativeSeries_C-\n" << RESET;
            running = false;
            break;
        default:
            cout << RED << "Invalid choice! Please enter 0-8.\n" << RESET;
        }

        if (running) {
            cout << "\nPress Enter to continue...";
            cin.get();
        }
    }

    return 0;
}
