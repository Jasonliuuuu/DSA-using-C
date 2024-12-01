// Nested recursion is a type of recursion where a recursive function calls itself within its own arguments. This form of recursion can lead to highly complex and deep recursive calls.

// Here’s a classic example of nested recursion in C++, using the Ackermann function:

#include <iostream>
using namespace std;

// int ackermann(int m, int n) {
//     if (m == 0) {
//         return n + 1;
//     } else if (m > 0 && n == 0) {
//         return ackermann(m - 1, 1);
//     } else {
//         return ackermann(m - 1, ackermann(m, n - 1));
//     }
// }

// int main() {
//     int m = 2;
//     int n = 3;
//     cout << "Ackermann(" << m << ", " << n << ") = " << ackermann(m, n) << endl;
//     return 0;
// }
// The nested calls create a deep and complex recursion tree. This is a hallmark of nested recursion, making it powerful but also potentially very resource-intensive.

// Pros:
// Expressive Power: Nested recursion can elegantly express certain complex problems that are naturally recursive in nature, providing a concise and clear solution.
// Mathematical Modeling: It is useful in mathematical modeling and computational problems where nested recursive relationships are common, such as in the definition of certain mathematical functions (e.g., Ackermann function).
// Algorithm Design: Can be useful in algorithm design for problems that inherently require deep recursive calls within recursive arguments.

// Cons:
// Complexity: Nested recursion can be difficult to understand and debug due to the deep and intricate call stack it creates.
// Performance: It can lead to extremely deep recursion trees, resulting in high memory usage and potential stack overflow errors.
// Efficiency: Often not efficient in terms of time complexity; some nested recursive functions can grow exponentially in the number of calls, making them impractical for large inputs.

//Another example is

int fun(int n){
    if (n > 100 )
        return n-10; 
    return fun(fun(n + 11));
}

int main(){
    int r; 
    r = fun(30); 
    cout << r << endl; 
    return 0; 
}