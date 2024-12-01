#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

void fun1(int n){
    if (n>0){
        cout << n << endl; 
        fun1(n-1);
    }

}

int main(){
    int x = 3;
    fun1(x);
}

// Here is a simple question, what is the time complexity of this program? 
// Let's see the main function step by step. the first declare the x = 3. The time complexity is O(1) since that this takes constant time to tell computer that x is equal to 3. Then move to fun1(x). This will bring the program to the certain function called fun1 and pass the parameter x, which is 3 at this time to the function. Let's see the cout, it is also O(1).then do the function(n-1). Since each call involves a constant amount of work, the total time complexity is proportional to the number of calls made. Therefore, the time complexity is O(n). (the number of calls is "n+1"{from  n down to 0 inclusive}). So that for loop is O(n). The whole process will be O(n). 