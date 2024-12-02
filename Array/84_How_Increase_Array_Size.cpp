// Once again, we cannot expand the size of any array no matter they are in stack or heap. Here is how we increase the arra size. 

int *p = new int[5]; 

int *q = new int[10]; 
// Now copy each element you already have in your previous array by using the for loop as follow

main(){
    int *p = new int[5]; // integer pointer name p
    int *q = new int[10]; // Integer pointer named q, this is the bigger one
    // the first line can also be written as following
    // int *p; 
    // p = new int[5]
    for( int i = 0; i <5; i++){
    q[i] = p[i]; 
    // Now, remember to release the memory by using the del 
    // Remember p is a pointer. 
    // Now the memoty of previous array is not needed now because we have already build an array with larger size. 
    delete [] p; // This mean delete the array that p points at
    p = q; // This meadn that the pointer p is set to the address of q, since that q is also a integer pointer, pointing at a address
    // we save the p pointer so that you can used just like before
    q = nullptr; 
    return 0;
    // From now in, we have removed the original array and create a new one that copy the value with it. 

    // why the size of array cannot be grown? Because the memory for the array should be contiguous. 
    }

}
