// WE are going to go through six sub-topic
// 1. What is recursion
// 2. Example of Recursion
// 3. Tracing Recursion
// 4. Stack used in Recursion 
// 5. Time complexity
// 6. Recursion Relation 
// Let's go through first - What is recursion?
// Simple: A function calling itself is called recursion. And iside recursive function , there must be some condition which will make the recursion stop (terminate), or it will be infinite work. 
//Exanple of Recursion:
#include <iostream>
using namespace std;


int fun(int n){
    if (n>0){
        cout << n << endl; 
        fun(n-1);
    }
}

int main(){
    int x = 3; 
    fun(x); 
    return 0;
}
// This is called as tracing of Recursive Function
// Recursion is like Repearting the task - LOOP. But loop have only ascending phase, but the recursion will have ascending as well as descending phase. 

// Asceding phase:
// During this phase, the function keeps calling itself with a different argument, usually moving towards a base case.
// This phase continues until the base case is reached, at which point no further recursive calls are made.


//Descending Phase:
// In this phase, the function returns from the recursive calls.
// Each recursive call returns control back to the previous call (one level up the call stack), carrying the results computed during the ascending phase.