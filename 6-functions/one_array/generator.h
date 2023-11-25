#include <math.h>
#include <stdlib.h>

int* arrgen(int size, int f, int k ){
    int* arr=malloc(sizeof(int)*size);
    arr[0]=0;
    arr[1]=f;
    for (int i=2; i<size; i++){
        arr[i]=(k-f)/(size-2);
    }
    return arr;
}


int* array_generator(int* real_size, int k, int m, int f){
    *real_size=10+rand()%91;
    int* arr=arrgen(*real_size, f,k);
    
    return arr;
}
