#include <math.h>

int calc_percent(int matrix[], int size){
    int n=0;
    int max=0;
    int min=1000000;
    for(int i=0;i<size;i++){
        if(matrix[i]>=max)
            max=matrix[i];
        if(matrix[i]<=min)
            min=matrix[i];
    }
    double r = (max - min)/2;
    for (int i=0;i<size;i++){
        if (matrix[i]>r)
            n+=1;
    }
    double x=n*100/size;
    return x;
}