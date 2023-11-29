#include <math.h>

double sum(int* array, int size){
    while (size>=0){
    if (size==0)
    return array[0];
    return array[size]+sum(array,size-1);
    }
}

double calc_sum_elements(int* array, int array_size){
    if(array_size<=0)
    return -1.0;
    int x=sum(array,array_size-1);
    return sum(array,array_size-1);
}
