#include <math.h>

unsigned long long calc_e(char order){
    double e=1, t=1;
    int iter=0;
    double e0=2.718281828459045;
    e0=(int)(e0*pow(10,order))/pow(10,order);
    for (int i=1;i<=100000000;i++){
        e=pow((1.0+1.0/i),i);
        if(e>=e0){
        iter=i;
        break;}
    }

    return iter ;
}