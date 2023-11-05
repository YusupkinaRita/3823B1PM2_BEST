#include <math.h>

double limit(double eps, int n_max){
    double n=0, n0=0;
    for (int i=1;i<=n_max;i++ ){
        n=i/(sqrt(i*i+i));
        if(i>1){
            n0=(i-1)/sqrt((i-1)*(i-1)+(i-1));
            if(n-n0<=eps)
                break;
        }
        
    }
    return n;
}