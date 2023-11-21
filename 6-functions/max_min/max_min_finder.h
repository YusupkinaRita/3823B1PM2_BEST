#include <math.h>

void get_max_min(int* array, int size, int* pMax, int* pMin){
    int max=-100000;
    int min=1000000;
    for(int i=0;i<size;i++){
        if(array[i]>max)
            max=array[i];
        if(array[i]<min)
            min=array[i];

    }
    *pMax=max;
    *pMin=min;
    return;
    }