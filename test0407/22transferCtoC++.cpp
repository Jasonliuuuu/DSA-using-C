#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
 
class Rectangle {
    private:
    int length; 
    int breadth;

    public:
    Rectangle(int l, int b){
        length = l; 
        breadth = b;
    }

    int area(){
        return length * breadth; 
    }
    void changeLength( int l){
        length = l;
    };
};
int main(){
    Rectangle R(10, 5); 
    cout << "Initial area:" << R.area() << endl; 
    // R.area(); 
    // You can only modify the parameter by calling the function(which have return in it), or you can also print it out directly by using C out, it will return what you want. 
    R.changeLength(20);
    cout << "Area after changing length:" << R.area() << endl; 

    return 0;
}