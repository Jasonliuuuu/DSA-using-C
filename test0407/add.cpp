#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std; 

int add (int a, int b)
{
	return a + b;
}

int main(){
    int num1 = 10; 
    int num2 = 20;
    int sum; 
    sum = add(num1, num2);
    cout << "sum is " << sum << endl;

    return 0;
    
}

    