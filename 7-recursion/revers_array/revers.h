#include <math.h>

void revar(int* arr, int size, int i){
    int x;
    if(i>=size)
        return ;
    x=arr[i];
    arr[i]=arr[size];
    arr[size]=x;
    revar(arr,size-1,i+1);
}

void reverse_array(int* array, int array_size){

    if(array_size>1)
    revar(array, array_size-1, 0);
}
