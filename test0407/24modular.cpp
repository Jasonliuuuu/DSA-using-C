#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;


int area( int length, int breadth){
    int area = 0;
    area = length * breadth; 
    return area; 
}


int peri( int length, int breadth){
    int peri = 0; 
    peri = 2 * ( length + breadth ); 
    return peri; 
}

int main(){
    int length = 0; 
    int breadth = 0;
    cout <<  "Please enter the lenth and the breath" << endl; 
    cin >> length >> breadth; 
    cout << "The area is: " << area(length, breadth); 
    cout << "the peri is: " << peri(length, breadth); 
    return 0;
}


// This is a simple demonstration of usin ght mnodule called in the main function. so it is easier to maintian the code and debug by using the modular technique. Just simply called the function and the function will do the task for you. And while you need it or need to print out. Just cout them so that can easily seen the result. 