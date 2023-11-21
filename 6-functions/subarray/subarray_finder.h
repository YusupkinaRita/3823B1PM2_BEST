#include <math.h>

int findsub(int* arr, int size, int* subarr, int subsize){
    int count=0;
    int s=0;
    for (int i=0;i<subsize;i++){
        for(int j=0; j<size; j++){
            if(arr[j]==subarr[i]){
                count++;
                break;
            }
        }
    }
    if (count==subsize){
        for (int i=0; i<size;i++){
            if(subarr[0]==arr[i]&&subarr[1]==arr[i+1]){
                s=i;
                break;
            }
        }
    }
    else
        s=-1;
    return s;
}

int find_subarray(int* array, int array_size, int* subarray1, int subarray_size1, int* subarray2, int subarray_size2, int* subarray3, int subarray_size3){
    int x1=findsub(array, array_size, subarray1, subarray_size1);
    int x2=findsub(array, array_size, subarray2, subarray_size2);
    int x3=findsub(array, array_size, subarray3, subarray_size3);
    return x1+x2+x3;
}
