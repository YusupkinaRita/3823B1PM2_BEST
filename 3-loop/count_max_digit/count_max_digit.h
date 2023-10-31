#include <math.h>

char count_max_digit(long long x ){
    char a=0;
    int max=0;
    long long y=x;
    while(x>0){
        if((x%10)>max)
            max=x%10;
        x=x/10;
    }
    while(y>=0){
        if((y%10)==max)
            a++;
        y=y/10;
    }
    return a;
}