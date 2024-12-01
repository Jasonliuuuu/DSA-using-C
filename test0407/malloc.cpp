#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std; 

int main()
{
    int *p; 
    p = (int *)malloc(5 * sizeof(int)); // C
    //malloc(5 * sizeof(int)) this malloc function return a void pointer
    // so we need to typecast it to int pointer
    // this line will allocate heap memory for 5 integers
    // and store the address of the first integer in p
    // p is a pointer to the first integer in the array
    // pointer is holding it. It is just holding one edge of that array sat 5000
    // Now using that pointer, we can access to the whole array
    // so this is how the heap memoty is created.
    // And how to do the same thing in C++
    p = new int[5]; // this is much simple
}