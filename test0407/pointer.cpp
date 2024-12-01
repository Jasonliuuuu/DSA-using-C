#include <iostream>
#include <string>
using namespace std; 


int main()
{
    int a = 10; 
    int *p; //integer pointer named p
    p = &a;  //P is set to the address of a // $ = the address of 
    //it can also be written as int *p = &a;
    // integer pointer named p is set to the address of a
    // this can be written in one line
    // int *p = &a
    cout << p << endl; //prints the address of a
    cout << *p << endl;  // there is no "int" in front of the "*". This time, means go to grab the value of what it points to
    //prints the value of a since that the pointer is pointing to a 
    printf("%d", *p); //prints the value of a since that the pointer is pointing to a
    // %d tells the function to expect an integer argument to be printed at that position.
    return 0; 
}