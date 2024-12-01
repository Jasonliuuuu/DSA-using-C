//There are many Types of recursion. 
// For example
// 1. Tail recursion
// 2. Head Recursion 
// 3. Tree Recursion
// 4. Indirect Recursion
// 5. Nested Recursion

// We introduce Tail Recursion first. 
// Actually we have see it just before. 
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

void fun1(int n){
    if (n>0){
        cout << n << endl; 
        fun1(n-1); // Nothing after this called
    }

}

int main(){
    int x = 3;
    fun1(x);
}
// This is a recursive call and that call is the last statement in a function. This is called Tail function. 
// All these operations will be performed at calling time only and the function will not be performing any operation at a returning time. 