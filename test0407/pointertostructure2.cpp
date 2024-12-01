#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std; 
struct Rectangle {
    int length; 
    int breadth; 

}; 
int main(){
    struct Rectangle *p; 
    p = (struct Rectangle*)malloc(sizeof(struct Rectangle)); // initializing the p pointer
    // Again, malloc(5 * sizeof(int)) this malloc function return a void pointer
    // Void pointer is the special pointer that can hold the address of any data type
    //It's a way to store a pointer to an unspecified type of data, offering great flexibility in functions that deal with data in a type-agnostic manner.
    p -> length = 10;
    p -> breadth = 5;
    
    cout << p -> length << endl;
    cout << p -> breadth << endl;
    // Since that the p is pointer, you can not directly change the parameter in the structure by p.length etc. 
    // You have to use the arrow operator to access the parameter in the structure.
    return 0; 
    }

    //this is a dynamic object created in a heap and the pointer is pointing there