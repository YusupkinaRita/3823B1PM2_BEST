#include <math.h>
#include<stdlib.h>

int get_mat_index(int i, int j, int n){
        return i*n+j;
    }
int* matrix_multy(int* A, int aM, int aN, int* B, int bM, int bN){
    if(aN!=bM)
    return 0;
    
    int* c=malloc(sizeof(int)*aM*bN);
    int x=0;
    
    for(int i=0;i<aM;i++){
        for (int j=0; j<bN; j++){
            int ind=get_mat_index(i, j, bN);
            c[ind] = 0;
            for (int k=0;k<aN; k++){
                c[ind]+=A[i*aN+k]*B[j+bN*k];
            }
        }
    }
    return c;
    }

