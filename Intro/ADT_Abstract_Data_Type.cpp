// What does it mean by "datatype"
// 1. Representation of Data // How you store data
// 2. Operation on Data
// Basically we can demonstrate and explain by the following simple code. 
//int x; 
// int represent the data type
// After declare it, we can do operation with the integer int. For example, +, -, /, etc. So this is the opearion of data. 
// These common data type also called "Primitive data type"

// What is USER DEFINED DATA TYPES
// In contrast to primitive data types, there is a concept of user defined data types. The operations and values of user defined data types thar are nor specified in the language but is specified by the user.
// So that's see what is abstract
// It means hiding internal detail. 
// Basically we do not need to know in detail that how the integer, 16 bits how they do operation and performed. Without knowing them, we can use them. These things are hidden grom us. We called them abstract. Without knowing internal detail and technique, we can use it.                        


//After knowing what is datatype and what is abstract data type, we can directly introduce what is abstract data type. 

//ADT are like uer defined data types which definew operations on values using functions without specifying what is there inside the function and how the opertations are performed. 
// ADTS are like uwer defined types which defines operation son values using functions withoit specifying what is there inside the function and how the operations are performed. 



#include <iostream>
#include <queue>
using namespace std; 


int main() {
    queue <int> q;
    q.push(10); // enqueue
    q.push(20);
    q.push(30);
    cout << q.front() << endl; // Output: 10
    q.pop(); // dequeue 10, last 20, 30
    cout << q.front() << endl; // Output: 20
    q.pop(); // dequene 20, last 30
    cout << q.front() << endl;  // output: 30
    q.pop(); // dequene 30 last nothing
    cout << q.front() << endl; 

    return 0;
}


