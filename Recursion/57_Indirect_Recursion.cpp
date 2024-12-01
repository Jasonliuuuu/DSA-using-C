// Indirect recursion occurs when a function is not directly recursive (i.e., it does not call itself), but instead, it calls another function, which eventually leads to the original function being called again. This forms a cycle of calls among multiple functions.

// Here’s a simple example in Python to illustrate indirect recursion:

#include <iostream>
using namespace std;

void functionB(int x); // Forward declaration of functionB

void functionA(int x) {
    if (x > 0) {
        cout << "Function A: " << x << endl;
        functionB(x - 1);
    }
}

void functionB(int x) {
    if (x > 0) {
        cout << "Function B: " << x << endl;
        functionA(x - 1);
    }
}

int main() {
    functionA(3);
    return 0;
}
