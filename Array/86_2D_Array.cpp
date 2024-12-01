#include <iostream>
using namespace std; 

int A[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

main(){
    int A[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int *B[3]; // This is an array of integer pointers. A array of three pointers. 
    // It basically means that you build a array of pointer. And those pointer, for each, they point to a certain array. So that at the end, you have 2d array. 
    B[0] = new int[4]; 
    B[1] = new int[4]; 
    B[2] = new int[4]; 
    B[0][0] = 1; // Assign a value to the first element of the first array
    cout << B[0][0] << endl; // Output the value

    // Don't forget to free the allocated memory
    for (int i = 0; i < 3; ++i) {
        delete[] B[i]; // Free each inner array
    }

    //the third way you can see in below
    int **C; 
    C = new int *[3]; 
    C[0] = new int[4]; 
    C[1] = new int[4]; 
    C[2] = new int[4]; 
    // In this way only the C is in the stack, all the array would be saved in heap. 
    return 0;

}
