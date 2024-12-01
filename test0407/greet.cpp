#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

void greet(string fullName){
    cout << "Hello " << fullName << endl;
}
string fullName (string firstName, string lastName ){
    //concatenating (combining)
    return firstName + " " + lastName;
}

int main() {
    //calling - invoking - executing
    // string name = fullName("Jason ", "Liu ");
    // cout << name << endl ; 
    // cout << "Done";
    greet (fullName("Jason", "Liu"));
    return 0;
}