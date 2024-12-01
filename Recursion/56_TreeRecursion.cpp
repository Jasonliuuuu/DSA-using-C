//Tree recursion occurs when a function makes more than one recursive call within its body, leading to a branching structure similar to a tree. This is in contrast to linear recursion, where each function call makes at most one additional recursive call.

// Characteristics of Tree Recursion:

// Multiple Recursive Calls: Each invocation of the function can result in multiple further invocations.
// Branching Structure: The calls form a tree-like structure, where each node (function call) can have multiple children (recursive calls).
// Exponential Growth: The number of function calls can grow exponentially, depending on the branching factor and the depth of recursion.

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int x = 5;
    cout << "Fibonacci of " << x << " is " << fibonacci(x) << endl;
    return 0;
}

// Characteristics of the Fibonacci Example
// Multiple Recursive Calls: Each call to fibonacci(n) results in two recursive calls: fibonacci(n-1) and fibonacci(n-2).
// Exponential Growth: The total number of calls grows exponentially with n. For example, calculating fibonacci(5) involves 15 calls.
// Redundant Calculations: The same values are recalculated many times (e.g., fibonacci(1) and fibonacci(0) are called multiple times).


// Applications of Tree Recursion
// Tree recursion is useful in scenarios where the problem naturally divides into multiple subproblems, such as:

// Combinatorial Problems: Generating permutations, combinations, and subsets.
// Divide and Conquer Algorithms: Merge sort and quick sort can be viewed as tree-recursive, where each problem splits into two subproblems.
// Backtracking Algorithms: Solving puzzles like Sudoku, the N-Queens problem, and finding paths in a maze.
// Optimizing Tree Recursion
// Due to the exponential growth and redundant calculations, tree-recursive functions can often be optimized using techniques such as:

// Memoization: Storing results of previous computations to avoid redundant calculations.
// Dynamic Programming: Breaking the problem into simpler subproblems and solving each subproblem only once.
// Summary
// Tree recursion is a powerful tool for solving complex problems that can be divided into multiple subproblems. Understanding its structure and characteristics helps in identifying suitable problems and applying optimizations to improve performance.