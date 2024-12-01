// please infer the 29 template
// this document is going to explain the meaining and function of "Scope resolution"
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;
template<class T>
class Arithmetic {
private:
    T a; 
    T b; 

public:
    Arithmetic (T a, T b); 
    T add(); 
    T sub(); 
}; 
    template <class T> 
    Arithmetic<T>::Arithmetic (T a, T b){
        this -> a = a; 
        // the reason we use this arrow is that to tell the compiler that this a is going to be the parameter in the class. This is a pointer to the current in C++
        this -> b = b; 
    } ; 
    template <class T> 
    T Arithmetic<T>::add(){
        T c ; 
        c = a + b; 
        return c; 
    }
    template <class T> 
    T Arithmetic<T>::sub(){
        T c; 
        c = a-b; 
        return c; 
    }


// int main(){
//     Arithmetic<int> A (10,5); // remember to declare the data type you are going to use 
//     cout << "Add: " << A.add() << endl; 
//     cout << "Sub: " << A.sub() << endl; 

//     return 0; 
// }

int main(){
    Arithmetic<float> A (10.99,5.33); // remember to declare the data type you are going to use 
    cout << "Add: " << A.add() << endl; 
    cout << "Sub: " << A.sub() << endl; 

    return 0; 
}
