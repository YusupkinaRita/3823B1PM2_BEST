#include<math.h>
long long calc_row(int n, long long k){
    long long s=0;
    for(int i=1;i<=n;i++){
        s=s+i;
    }
    long long k1=k;
    long long suml=s*k;
    if (suml<0)
        suml=suml*(-1);
    if(k<0)
        k=k*(-1);
    unsigned long long sum=s*k;
    if(sum==suml)
        return s*k1;
    else
        return 0;
}