#include <iostream>
#include <stdlib.h> 
using namespace std; 


struct Array{
    int A[10]; 
    int size; 
    int length; 
}; 

// The "array in white is only a meaning of array that needed in following, so it could be named whatwever you want"
void Display(struct Array array){
    int i; 
    cout << "Elements are: " << endl; 
    for(i = 0; i < array.length; i++){
        cout << array.A[i]<< " "; 
    }
    cout << endl; 
}
// This is a good practice that we have to pass the address of the array but not directly pass the array paramenter. Since that if we call the array directly, a copy of the array is made. Any modifications to the array within the function will affect the copy, not the original array in the caller. 

void Insert(struct Array *array, int index, int x){
    int i; 
    if(index >=0 && index <= array->length){
        for(i = array -> length; i > index; i--){
            array-> A[i] = array -> A[i-1];
        }
    array -> A[index] = x; 
    array -> length++; 
    }
}

void Append(struct Array *array, int x){
    // the asterisk in the function signature indicates that "array" is a pointer to a struct Array"
    if(array -> length < array-> size){
        array -> A[array->length++] = x; 
    }
}

int main(){
    struct Array arr{{2, 3, 4, 5, 6}, 10, 10}; 
    Display(arr); 
    // Append(&arr, 7); 
    // this will pass the address of arr (i.e. a pointer to "arr")
    Insert(&arr, 6, 10); 
    Display(arr); 
}