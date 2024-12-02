// Static array means that the size of the array is static. And the Dynamic array means that the size of the array is dynamic. 
// Once an array is created, it's size cannot be modified. So how the size of the array can be dynamic?
// When we declare a function for example; 

// void main(){
//     int A[5]; 
// }

// In C language, when you are mentioning the size of an array, it must be a constant value, it cannot be a variable. You must write some constant value there. But in C++, we can create an array of any size at runtime. And it will be created inside the stack only. Whereas in C language the size of an array can only decided during the copile time. 
// Which means that in C++, you can ask the user to decide the size of the array by using Cin, which is not technically allowed in C language. 


// Before this, we teach how to build an array in stack, but we also want to know how to build an array inside heap. Now I am thinking to build it with pointer, so that this pointer in the stack can point to the array in the certain heap. 
// Yes, first of all, we have to declare a pointer. 
int main(){

    int A[5]; 
    int *p; // declare a integer pointer named p
    // Remeber, in any language, when you declarea a variable, the memory for that variable will go inside the stack only not heap!!
    p = new int[5];
    p[0] = 3; 
    // heap memoty cannot be accessed direclty. it has to be access indirectly. 
    // You can access an array from heap by using a pointer.
    // pointer act as a name of an array.  
    delete[] p;
    return 0; 
}

//Below is the practice
// int main(){

//     int A[5]; 
//     int *p; 
//     p = new int[5]; 
//     p[0] = 5; 

//     delete []p; 
//     return 0; 
// }

// So now I am curious about to adjust to alter the size of an array. It can do it only in heap not on the stack. Again, all size of array that created in the heap and stack cannot be resized. But the array in the heap, we have other way to make it. 