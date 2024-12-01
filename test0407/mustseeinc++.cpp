//Monolithic Program
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;



int main(){
    int length = 0;
    int breadth = 0; 
    cout << "Enter length and breadth of rectangle: "; 
    cin >> length >> breadth;

    int area = length * breadth;
    int peri = 2 * (length + breadth);

    cout << "Area of rectangle: " << area << endl;
    cout << "Perimeter of rectangle: " << peri << endl;
    return 0;
}