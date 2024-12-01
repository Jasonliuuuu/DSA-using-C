// No statement or  operation before the function called. 
// The function mat like following code

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

void func(int n){
    if (n>0){
        func(n-1);
        cout << n << endl;
    }
}
int main(){
    func(3);

}

// In this code, there is no extra or any code before the recursive called. So it is called the Head Recursion. Simple. 