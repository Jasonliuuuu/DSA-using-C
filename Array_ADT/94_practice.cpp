#include <iostream>
#include <stdlib.h> 
using namespace std; 

struct Array{
    int *A; 
    int size; 
    int length; 
}; 


void Display(struct Array arr){

    int i; 
    cout << "---------------Display Start----------------\n" ; 
    cout << "Elements are: " <<endl; 
    for(i = 0; i < arr.length; i++){
        cout << arr.A[i]; 
    }

}



int main(){
    struct Array array; 
    int n; // arr.length
    int i; 
    cout << "Enter the size of the array" << endl; 
    cin >> array.size; 
    array.A = new int[array.size]; 
    array.length = 0; 
    cout << "Enter the length you want in the array" << endl; 
    cin >> n; 
    cout << "you just type the n is: " << n << endl; //For test

    cout << "Enter all Elements: " << endl; 
    
    for(i = 0; i < n; i++){
        cin >> array.A[i]; 
    }

    array.length = n; 
    Display(array); 

    delete[] array.A; 

    return 0; 


}