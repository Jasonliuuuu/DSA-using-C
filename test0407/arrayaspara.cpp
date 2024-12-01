//array is passed by address
// it can not be passed by value at all
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std; 
// even a function can modify the actual parameter. 
void fun(int A[], int n ){
    A[0] = 100;
    n = 60;
}

int main(){
    int A[] = {1,2,3,4,5};
    cout << "In the beginning" << A[0] << endl;
    fun(A, 5);
    int n = 100000;
    cout << "After the function" << A[0] << endl;
    cout << A[0] << endl;
    cout << n << endl;
    return 0;
}
// Arrays are Passed by Reference: 
// When you pass an array to a function in C++, 
// you're actually passing a pointer to the first element 
// of the array. This means that any changes made to the 
// array elements within the function will affect the original
// array in the caller's scope. In essence, the function 
//receives the address of the first element of the array,
//allowing it to access and modify the actual elements of the array.
 