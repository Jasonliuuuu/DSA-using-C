#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};
void Initilize (Rectangle *R, int l, int b){
    R -> length = l; 
    R -> breadth = b;
};

void Area (Rectangle R){
    int area;
    area = R.breadth * R.length;
    cout << area << endl;
}; 

void changel(Rectangle *R, int l){
    R -> length = l;
};


int main(){
    Rectangle M; 
    Initilize (&M, 5, 10); 
    Area (M); 
    changel(&M, 20);
    Area (M);

}

// If you want to modify the parameter in the certain structure by using fuction, you have to pass the address of the structure, otherwise, if you only pass the stucture, it will only revise the copy of the struture in the function, not in your main code. So it is important to learn from this code and how to pass the address of the structure to the function. 