#include <math.h>

int* matrix_multy(int* A, int aM, int aN, int* B, int bM, int bN){
    if(aN!=bM)
    return 0;
    else{
    int sum=0;
    for(int i=0;i<aM;i++){
        sum=sum + (*(A+i)) * (*(B+i*bN));
    
    }
    int* p=&sum;
    for(int i=0;i<aM*bN;i++){
    if(*(p-1)!=sum)
    break;
    else
    p=p-1;
    }

    return p;
    }
}
