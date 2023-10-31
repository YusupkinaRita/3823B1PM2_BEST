#include <math.h>

char count_max_digit(long long x ){
    char a=0;
    int max=0;
    while(x>0){
        if((x%10LL)>max)
            max=x%10;
        x=x/10LL;
    }
    while(x>=0){
        if((x%10)==max)
            a++;
        x=x/10LL;
    }
    return a;
}