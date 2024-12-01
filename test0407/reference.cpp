#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std; 


int main(){
    int a = 10; 
    int &r = a;  
    //star before varialbe name is a pointer ex: *p
    // & before variable name is a reference ex: &r
    // &r = a means r is a reference to a which is a
    // this A itself is called r, so you can call this value with name A as well as with r
    cout << a << endl;
    r++; 
    cout << r << endl;
    cout << a << endl;
    // Why you need two name expressing the same paremeter
    // it is useful in parameter passing, it is a useful feature in C++
    //we use reference instead of using pointers. So when we learn about the parameter passing
    //that time will explain what is the usage of refernece
    //reference is nothing but another name given to a variable
    //actual name for both -> a and r, r is alias


}