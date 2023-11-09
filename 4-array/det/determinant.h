#include <math.h>

int determinant(int matrix[], int size){
    if(sqrt((double)size)!=sqrt(size))
        return -404;
    else{
    int k=sqrt(size);
    int d=0;
    for(int i=0;i<size;i=i+k+1){
        d=d+matrix[i];
    }
    for(int i=size;i>=0;i=i-k-1){
        d=d-matrix[i];
    }

    return d;
    }
}