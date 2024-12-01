#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Arithmetic {
private:
    int a; 
    int b; 
public:
    Arithmetic (int a, int b){
        this -> a = a; 
        // the reason we use this arrow is that to tell the compiler that this a is going to be the parameter in the class. This is a pointer to the current in C++
        this -> b = b; 
    } ;

    int add(){
        int c ; 
        c = a + b; 
    
        return c; 
    }
    int sub(){
        int c; 
        c = a-b; 
        return c; 
    }
}; 

int main(){
    Arithmetic A (10,5); 
    cout << "Add: " << A.add() << endl; 
    cout << "Sub: " << A.sub() << endl; 

    return 0; 
}
