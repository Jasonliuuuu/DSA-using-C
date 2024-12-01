// What is the size of the stack leaving main function?
// When having the code in the followig 
using namespace std; 
#include <iostream>

void fun1(int n){
    if (n>0){
        cout << n << endl; 
        fun1(n-1);
    }
};

int main(){
    int x = 3; 
    fun1(x);
    cout << "Hello" << endl; 
}

//In this example, four activation records are created so the size of the stack is 4. (3, 2, 1, 0). 
// So the size of the stack is 4. 
// And how much memory it is comsuming. 4(depends on your compiler) * 4 =16

