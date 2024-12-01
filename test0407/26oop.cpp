#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Rectangle{
    public:
    int length; 
    int breadth; 

    void initilize( int l, int b){
        length = l; 
        breadth = b; 
    }; 

    int area(){
        return length * breadth; 
    }; 
    
    int peri(){
        return 2 * (length + breadth);
    }
}; 

int main(){
    Rectangle R; 
    int l= 0; 
    int b = 0; 
    cout << "Enter the length and breadth:" << endl; 
    cin >> l >> b; 

    R.initilize(l, b); 

    cout << "the area is: " << R.area(); 
    cout << "the peri is: " << R.peri(); 

    return 0; 

}