#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std; 


int main(){
    int *p; 
    p = (int*)malloc(5 * sizeof(int));
    //p = new int[5]; same as above line 

    p[0] = 10; 
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    p[4] = 50;

    for (int i = 0; i<10; i++)
    {
    cout << p[i] << endl;
    }
    delete[] p; 
    //free(p); same as above line but is C syntex
    
    
    return 0;
}