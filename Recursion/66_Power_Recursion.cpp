#include <stdio.h>
#include <iostream>

using namespace std; 
int power( int m, int n){
    if (n==0)
        return 1; 
    return power(m, n-1) * m; 
}

int power1 (int m, int n){
    if (n==0)
        return 1; 
    if (n%2 == 0)
        return power1( m*m, n/2); 
    return m * power1 (m*m, (n-1) / 2); 
}
// This function also calculates m^n
// But it uses a more efficient approach called "exponentiation by squaring."

int main(){
    int r = power1(2, 9); 
    cout << "r: " << r << endl; 
    return 0;
}

//Initial call: power1(2, 9)
// n is odd, so it returns 2 * power1(4, 4)

// Recursive call: power1(4, 4)
// n is even, so it returns power1(16, 2)

// Recursive call: power1(16, 2)
// n is even, so it returns power1(256, 1)

// Recursive call: power1(256, 1)
// n is odd, so it returns 256 * power1(65536, 0)

// Recursive call: power1(65536, 0)
// n is 0, so it returns 1.