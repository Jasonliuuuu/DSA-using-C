// There is two type of Heap. One is Max Heap, the other is Min HEap. 

// On the top of the Min Heap tree, that is the minimum value. On the other hand, we have maximum value on the top of the max heap. 

// It is like in emergency room , it is a priority quene. 
// You can only remove the root og the heap. Here is how you deleting the root node. 
// 1. Remove the root node from our heap. 
// 2. Replave it with the Node furthest to the right 
// 3. "Heapify " the Heap by comparing parent Node's to their children and swapping if neccessary

// Stack appear sequentially and delete also consequentially. ABC, CBA. Please mechenism called stack. Depends on the compile. Program don't have to do anything for allocation and destraction. When parameter declare, it will automatically ctreat the room in stack and delete it after using. 

//How heap memory ultilize by the program. Heap means pile up
// Heap is used in two cases. 
// One is things are organized like the tower thing. 
// The other is that unorganized thing. 
// Stack is organized. 
// Heap have to be treated as resource. 
// Suupose printer is the resources, once the function called and finish, it should be release so that other program can called the function. 
// Program can not directly access heap memory directory. So how we can get the data in heap. POINTER!!!!!


// Heap vs. Stack Memory Allocation
// Stack Memory:

// Automatic Allocation: Memory for local variables and function call parameters is automatically allocated and deallocated as functions are called and return.
// Fixed Size: The size of the stack is generally much smaller and is determined at the "start of the program" by the compiler.
// LIFO (Last In, First Out): Stack operates in a LIFO order, which means the last memory block allocated is the first one to be deallocated.
// Lifetime: Variables allocated on the stack are only alive for the duration of the function call in which they are declared.
// Heap Memory:

// Dynamic Allocation: Memory can be allocated and deallocated manually using new and delete (or malloc and free in C).
// Flexible Size: The heap can grow and shrink dynamically as needed, limited by the system’s available memory.
// Non-Automatic Deallocation: Memory on the heap must be explicitly deallocated by the programmer, otherwise, it can lead to memory leaks.
// Lifetime: Variables on the heap remain allocated until explicitly deallocated or the program ends.

#include <iostream>

void stackAllocation() {
    int array[5]; // Allocated on the stack
}

void heapAllocation() {
    int * p ;
    p = new int[5]; // Allocated on the heap // this happen in C++
    //p = (int*)malloc(2*5) // this happen in C language
    // Do something with the array
    delete[] p; // Deallocated manually MANUALLY!!!! 
    // If you do not delete it manually, you can not use the moemry again, this loss os called memory leak.
}

int main() {
    stackAllocation();
    heapAllocation();
    return 0;
}

// Why the Array Allocated by new is on the Heap
// Manual Control: Using new gives you manual control over the memory. You decide when to allocate and deallocate, which is characteristic of heap memory management.
// Dynamic Lifetime: Memory allocated with new remains available until you explicitly deallocate it with delete. This is essential for cases where the data needs to outlive the scope of the function that created it.
// Avoiding Stack Overflow: Large data structures are better allocated on the heap to avoid stack overflow. The stack has limited space and is not suitable for large or dynamically-sized data.

// Key Points:
// Lifetime Management: Stack memory is managed automatically, whereas heap memory requires manual management.
// Size and Flexibility: The heap is more flexible for larger or dynamically sized data, whereas the stack is limited in size.
// Performance: Stack allocation is generally faster than heap allocation due to its simple LIFO structure and the lack of need for manual management. However, heap allocation provides greater flexibility and is

// So we haave seen how the static memory allocation is done, form the stack and how the dynamic momory allocation is done from the heap.