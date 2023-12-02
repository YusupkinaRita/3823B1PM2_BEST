#include <math.h>
double num ( int k){
    if (k==0)
    return 0.0;
    return (num(k-1)+1.0)/k;
    
}

double sum(int k){
    while(k>=0){
    if (k==0)
    return 0.0;
    double x=num(k);
    return x+sum(k-1);
    }
}

double find_sum_elements_series(int k){
    if(k==0)
    return 0;
    if (k<0)
    return -1;
    else
    return sum(k-1);
 
}
