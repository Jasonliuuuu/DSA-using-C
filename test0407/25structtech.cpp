#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

struct Rectangle{
    int length; 
    int breadth; 
}; 

int area(Rectangle P){
    int area = 0; 
    area = P.breadth * P.length; 
    return area; 
}

int peri( Rectangle P){
    int peri = 0; 
    peri = 2 * (P.breadth + P.length); 
    return peri; 
}

int main(){
    Rectangle S = {10, 20};
    cout << area(S) << endl; 
    cout << peri(S) << endl; 
    
    return 0; 

}
