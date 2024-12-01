#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;


struct Rectangle {
    int length;
    int breadth;
}; 

void changeLength( Rectangle &r){
    // So you have to indicate that it is reference struct (r)
    r.length = 20;

};

int main(){
    Rectangle r = {10,5};
    cout << "the length initail is " <<  r.length << endl;
    changeLength(r);
    cout << "now the lenth after the functio is " << r.length << endl;

    // aims to modify the length field of a Rectangle structure instance within a function. However, because the Rectangle is passed by value to the changeLength function, only a copy of it is modified, leaving the original Rectangle in main unchanged. This is why you don't see the expected modification after calling changeLength.

    // it work same as the value, the actual value cannot be change in the fucntion. 
    return 0;
}