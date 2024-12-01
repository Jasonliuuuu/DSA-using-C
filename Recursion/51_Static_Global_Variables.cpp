// #include <iostream>
// #include <string>
// #include <stdlib.h>

// using namespace std;

// int func(int n){
//     if (n > 0){
//         return func(n-1) + n; 
//     }
//     return 0; 
// }; 
// int main(){
//     int a = 5; 
//     cout << func(a) << endl;
//     return 0;
// }

// The output will be 15
// In the stack, it will be like the following.  
// n = 0
// n = 1
// n = 2
// n = 3
// n = 4
// n = 5
// You can easily see that since the a = 5. In the beginning the parameter pass to func. and it is bigger than 0. So process the child. And than it call the func again with n-1 as parameter. Recursive. Until when the func(n-1) n = 1, the func(0) would return 0, which is the top of the n, is 0, since it return directly 0. 
// This aware of local variables of a function. 
// Let's introduce static variables in Recursion
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int func(int n){
    static int x =0;
    if (n > 0){  
        x = x + 1;
        return func(n-1) + x;
    }
    return 0; 
};

int main(){
    int a = 5;
    cout << func(a) << endl;
}

//The code shoe that if a = 5, it process the func(5). This will go the the function "func" and pass the parameter 5. Then at this time, create the static int x = 0. Then n is bigger than 0 so move to the next. x= x +1. So the x is 1 now. Then go to func(n-1). At this moment the n is 5. So it is calling func(4) now. Then this will happen first. And leave x nothing. So go to func(4). It is bigger than 0, so the x = x+1. The x is equal to 2 now. Recursive. at the end when it is calling func(n-1) and n is equal to 1. It is calling func(0). Then ar this time, it will return 0. Then the x is grow to 5 already. So the func(n-1) when n = 1 is 0. Then this will add the x, which is 5. Then recursive back 5 times. So the output is 25. This is called the global variable save in Code section. Not in stack.