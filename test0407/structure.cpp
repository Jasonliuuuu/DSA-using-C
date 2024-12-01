#include <iostream>
#include <string>

using namespace std; 

struct Card{
    int face;
    string shape;
    string color;
}; 

int main()
{
    // struct Card C; 
    // C.face = 1; 
    // C.shape = "Square"; 
    // C.color = "Red";
    struct Card C = {1, "Square", "Red"};

    cout << C.face << endl;
    cout << C.shape << endl;
    cout << C.color << endl;
}