#include <math.h>
double sum (int n){
    if(n==1)
        return 1.0;
    return 1.0/n+sum(n-1);
}

double sum_series(int n){
    if (n<=0)
    return -1.0;
    double x=sum(n);
    return sum(n);

}
