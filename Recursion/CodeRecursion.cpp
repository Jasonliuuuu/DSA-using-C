#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

void fun1(int n){
    if (n>0){
        cout << n << endl; 
        fun1(n-1);
    }

}

int main(){
    int x = 3;
    fun1(x);
}