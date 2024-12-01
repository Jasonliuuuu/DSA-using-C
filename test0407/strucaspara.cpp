#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
// this practive will show me the benefit of using the
// Structure as parameter, assume that you have to calculate
// The area of the rectangle inside the structure that include lebgth and breadth
// You don't need to pass two parameter seperately, instead you
// Can pass the whole structure directly be used to the AREA function


struct Rectangle{
    int length;
    int breadth;
};

int area(Rectangle r){
    return r.length*r.breadth;
}

int main(){
    Rectangle r = {10,5};
    cout << "the length of this rectangle is " << r.length << endl;
    cout << "the breadth of this rectangle is " << r.breadth << endl;
    cout << "Area of Rectangle is "<< area(r) << endl;
    return 0;
}