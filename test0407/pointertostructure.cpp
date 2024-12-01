#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std; 

struct Rectangle
{
    int length; //this takes two bytes
    int breadth; //this takes two bytes
};
int main()
{
    struct Rectangle r = {10, 5};
    struct Rectangle *p = &r; // p is only take 2 bytes not 4 bytes(2+2)    
    // since that evry pointer whatever the type may be
    // this p will be pointing on the varible r
    // now I want to acces the parameter in r using the pointer p
    cout << "the lenght is " << r.length << endl;
    cout  << "the breadth is " << r.breadth << endl;

    cout << "now I want to change the value in this specific structue" << endl; 
    r.length = 15; 
    (*p).length = 20; 
    p->breadth = 100;
    // we can also use
    // p->length = 15;
    // p->breadth = 20;
    cout << "the lenght is " << r.length << endl;
    cout  << "the breadth is " << r.breadth << endl;
    return 0;
}
