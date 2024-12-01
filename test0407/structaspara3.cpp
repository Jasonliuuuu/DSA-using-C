#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

#include <iostream>
#include <string>
#include <cstdlib> // Include for compatibility with malloc, but not needed if you use new

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

struct Rectangle* fun() {
    // when I write like this, it means that the function 'fun' will return a pointer, this pointer will be sent to 'Rectangle structure' 
    struct Rectangle* p = new Rectangle; // Allocate memory for a Rectangle structure
    p->length = 15; // Access the members using the pointer
    p->breadth = 7;
    return p;
}

int main() {
    struct Rectangle* ptr = fun();
    cout << "the length is " << ptr->length << " and the breadth is " << ptr->breadth << endl;

    delete ptr; // Don't forget to release the memory allocated by new

    return 0;
}
