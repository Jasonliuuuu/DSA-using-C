#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;


int main(){
    int length = 0; 
    int breadth = 0;
    int area = 0; 
    int peri = 0; 

    cout << "Enter the Length and Breadth:" << endl; 
    cin >> length >> breadth; 
    area = length * breadth; 
    peri = 2 * (length + breadth); 

    cout << " The area is: " << area << endl; 
    cout << " The peri is: " << peri << endl;
    return 0;
}


// monolithic means that this piece of code is very simple and all function is calculat in the main function so that it can be down very easy and there is little structure or any seperate. But in modern coding, it is seldom use this technique since that this is hard to maintain, extend, and debug if the program get bigger, we should avoid it. 