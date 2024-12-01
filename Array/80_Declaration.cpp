#include <iostream>
using namespace std; 

// int A[5]; 


int main(){
    int A[5] = {1, 2, 3, 4, 5}; 
    cout << "the address of this array is: " << A << endl; // This will print out the address of the array
    for (int n = 0; n <5; n++){
        cout << "The " << n << " number of the array is: " << A[n] << endl; 
    }
    cout << "the last paramter in this array is: " << *(A+4) << endl; // This is another way to print out the value, but it is weild. 
    return 0; 
}

// If I try to initiliza one of them. It will automatically initilize all the value exist in the array to be 0
