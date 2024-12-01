#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
 
struct Rectangle {
    int length; 
    int breadth;
 }; 

void initilize (struct Rectangle *r, int l, int b){
    // This function expect a pointer to a 'Rectangle' Structure
    r -> length = l; 
    r-> breadth = b;

    //the reason why I can't use the r.length = l is because the r is the pointer, you can not directly access the parameter usign the dot operator. So you have to do it with the arrow
};
int area (struct Rectangle r){
    return r.breadth * r.length;
};
void changelength ( struct Rectangle *r, int l){
    r -> length = l;
}
int main(){
    Rectangle r;
    initilize(&r,10,5);
    // This & means pass the address of the rectangle r
    cout << area(r) << endl;
    changelength(&r,20);
    cout << area(r) << endl;
    return 0;
}