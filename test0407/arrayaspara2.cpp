#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std; 

// void fun(int A[]){
//     cout << "the size of A is " << sizeof(A) << endl;
//     cout << "the size of the int " << sizeof(int) << endl;
//     cout << sizeof(A) / sizeof(int) << endl;
// }

// int main(){
//     int A[] = {2, 4, 6, 8, 10}; 
//     // int n = 5; 
//     fun(A);
//     // when iside the function 'fun' does not give you the size of 
//     // the array but the size of a pointer on my system. This is why 
//     // my method for calculting the arrat size does not work as exoected. 
    
//     // REMEMBER: when passing the array to the function, it only pass the pointer
    
//     for(int x:A)
//         cout << x << endl;

//     return 0; 
// }


void fun(int A[], int arraySize) {
    cout << "the size of A is " << arraySize * sizeof(int) << " bytes" << endl;
    cout << "the size of an int is " << sizeof(int) << " bytes" << endl;
    cout << "the number of elements in A is " << arraySize << endl;
}

int main() {
    int A[] = {2, 4, 6, 8, 10};
    int n = sizeof(A) / sizeof(A[0]); // Calculate the number of elements in A
    fun(A, n);
    for(int x : A)
        cout << x << endl;

    return 0; 
}
