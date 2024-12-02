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
    cout << "Elements are: " << endl; 
    for(i = 0; i < arr.length; i++){
        cout << arr.A[i]; 
    }
}
int main(){
    struct Array arr; 
    int n; //arr.length
    int i; 
    cout << "Enter the size of the array: " << endl; 
    cin >> arr.size; 
    arr.A = new int[arr.size]; 
    arr.length = 0; 
    cout << "Enter the length you want in the array" << endl; 
    cin >> n; //To see how many numbers in the array
    cout << "Enter all Elements:" << endl; 

    for(i = 0; i < n; i++){
        cin >> arr.A[i]; 
    }
    arr.length = n; 

    Display(arr); 


    delete[] arr.A; 

}