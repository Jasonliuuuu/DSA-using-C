#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std; 

void swap(int x , int y){ //this x and y are formal parameter
    int temp; 
    temp = x;
    x = y;
    y = temp;
    
    
}


int main(){
    
    int a = 10; 
    int b = 20; // this a and be here is actual parameter
    cout << "before swap the a and b is " << a << "and " << b << endl;
    swap(a,b); 
    cout << "now the a and b is still " << a << " and " << b << endl;  
    // In pass by Value , the actual paameters will not be modified if any chnges 
    // are done to formal parameters. 
    return 0;

    // but you can easily really swam them by modiufy the voide swap function
    // In the swap function, the parameters x and y are now passed 
    //by reference using int&x, this is called reference
    // allowing them to modify the original variables a and b. 
}