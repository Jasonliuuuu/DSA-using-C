//this tell you that the pointer use 8 or 4 bytes no matter what type it is pointing 
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std; 
struct Rectangle {
  int length;
  int width;
};

int main(){
    int *p1; 
    char *p2;
    float *p3;
    double *p4;
    struct Rectangle *p5;

    cout  << sizeof(p1) << endl;
    cout  << sizeof(p2) << endl;
    cout  << sizeof(p3) << endl;
    cout  << sizeof(p4) << endl;
    cout  << sizeof(p5) << endl;
}