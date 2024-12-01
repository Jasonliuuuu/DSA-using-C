#include <iostream>

using namespace std; 
// if you want to sum up the value  by using recursion. Remember to identify the two different answer for the recursive. 
// For example, if n is equal to 0, the sum of n is set to 0. When n is greater than 0, than can be directly calling the sum(n)

int sum(int n){
    if (n==0)
        return 0; 
    return sum(n-1) + n; 
}
// This is recursive

int sum(int n){
    int s = 0; 
    int i = 0; 
    for( i = 1; i < n; i++)
        s = s + i;
    return 0; 
}
// This is iteration

int main(){
    cout << sum(5) << endl; 
    return 0;  
}

// One thing have to be noted is that even the same sunction, we can write it using iteration, that is uisng loop. Recursion will be costly, because it ises stack internally. 

// In this case. For five, it has made 6 calls. So the size of the stack is six. And the variable N is crearted for six time. But what is the time complexity of this code. There are total six calls. So for value of N, there will be N+1 calls. So it is O(n). And the space is also O(n). Recursion is costly. But it was easy for converting a mathematical definition, that is recursive definition, into a function. That's how recursions are easy to write compared to loops. 