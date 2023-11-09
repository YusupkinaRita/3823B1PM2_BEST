#include <math.h>

int hole_finder(int matrix[], int length, int width){
    double n=10000;
    int min=1000;
    int el=0;
    int i0=0, j=0;
    int size=length*width;
    for (int i=0;i<size;i++){
        if((matrix[i]<matrix[i+1])&&(matrix[i]<matrix[i-1])&&(matrix[i]<matrix[i-width])&&(matrix[i]<matrix[i+width])&&(matrix[i]<matrix[i-width-1])&&(matrix[i]<matrix[i-width+1])&&(matrix[i]<matrix[i+width+1])&&(matrix[i]<matrix[i+width-1])){
            n=matrix[i];
        if(n<min){
            min=n;
            el=i;
            }   
            }
    }
    i0=el/width;
   // if(el%width==0)
    //    i0=i0-1;
    j=(el-width*i0)%width;
   // if(el+1%length==0)
       // j=j-1;
    return i0*100+j;
}