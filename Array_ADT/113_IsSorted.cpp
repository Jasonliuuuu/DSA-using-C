#include <iostream>
#include <stdlib.h> 
using namespace std; 


struct Array{
    int A[10]; 
    int size; 
    int length; 
}; 

void Display(struct Array array){
    int i; 
    cout << "Elements are: " << endl; 
    for(i = 0; i < array.length; i++){
        cout << array.A[i]<< " "; 
    }
    cout << endl; 
}

void Insert(struct Array *array, int index, int x){
    int i; 
    if(index >=0 && index <= array->length){
        for(i = array -> length; i > index; i--){
            array-> A[i] = array -> A[i-1];
        }
    array -> A[index] = x; 
    array -> length++; 
    }
}

void Append(struct Array *array, int x){
    if(array -> length < array-> size){
        array -> A[array->length++] = x; 
    }
}

int Deltete(struct Array *array, int index){
    int x = 0; 
    int i; 
    if(index >= 0 && index < array->length){
        x = array->A[index]; 
        for(i = index; i < array->length-1; i++){
            array-> A[i] = array->A[i+1];
        }
        array->length--; 
        return x; 
    }; 
    return 0;
}

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int LinearSearch(struct Array *array, int key){
    int i; 
    for(i = 0; i < array->length; i++){
        if (key == array->A[i]){
            swap(&array->A[i], &array->A[0]);
            return i;
        }
    };
    return -1; 
}

int BinarySearch(struct Array array, int key){
    int l = 0; 
    int h = array.length - 1; 
    
    while(l <= h){ 
        int mid = (l+h) / 2; 
        if (key ==array.A[mid])
            return mid; 
        else if(key < array.A[mid])
            h = mid - 1; 
        else
            l = mid + 1;
        }
    return -1; 
    }

int Get(struct Array array, int index){
    if(index >= 0 && index < array.length)
        return array.A[index]; 
    return -1; 
}

void Set(struct Array *array, int index, int x){
    if(index >= 0 && index < array->length)
        array->A[index] = x; 
    
}

int Max(struct Array array){
    int max = array.A[0]; 
    int i; 
    for(i = 1; i < array.length; i++){
        if(array.A[i] > max)
            max = array.A[i];
    }
    return max; 
}

int Min(struct Array array){
    int min = array.A[0]; 
    int i; 
    for(i = 1; i < array.length; i++){
        if(array.A[i] < min)
            min = array.A[i];
    }
    return min; 
}

int Sum(struct Array array){
    int s = 0; 
    int i; 
    for (i =0; i < array.length; i++)
        s = s + array.A[i]; 
    return s; 
}

float Avg(struct Array array){
    return (float) Sum(array) / array.length; 
}

void Reverse(struct Array *array){
    int i; 
    int j; 
    int *B = new int[array->length];
    for(i = array->length - 1, j = 0; i >= 0; i--, j++){
        B[j] = array->A[i];
    }
    for(i = 0; i < array->length; i++){
        array->A[i] = B[i];
    }

}

void InsertSort(struct Array *array, int x){
    int i = array->length - 1; 
    if (array->length == array->size)
        return; 
    while(i >= 0 && array->A[i] > x){
        array-> A[i+1] = array->A[i];
        i--; 
    }
    array->A[i+1] = x; 
    array->length ++;     
}

int IsSorted(struct Array array){
    int i; 
    for(i = 0; i < array.length-1 ; i++){
        if(array.A[i] > array.A[i+1])
            return 0; 
    }
    return 1; 
}

int main(){
    struct Array arr{{2, 3, 5, 10, 15}, 10, 5}; 
    cout << IsSorted(arr) << endl; 
    Display(arr);
    
    return 0;
}