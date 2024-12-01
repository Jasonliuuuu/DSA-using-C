#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std; 

void swap(int *x , int *y){ //pointer can take address
    int temp; 
    temp = *x;
    *x = *y;
    *y = temp;
    
     
}


int main(){
    
    int a = 10; 
    int b = 20; // this a and be here is actual parameter
    cout << "before swap the a and b is " << a << "and " << b << endl;
    swap(&a,&b); // Remember this is called the address of A and B
    cout << "now the a and b is still " << a << " and " << b << endl;  
    return 0;

    //one function cannot access the variables of another function direclty
    // but it can access using pointers 

}

