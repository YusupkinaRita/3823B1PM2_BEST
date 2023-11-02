#include <math.h>

char find_digit(double number, char digit){
    int size=0,x=0,a=0;
    long long n=number;
    if((digit>9)||(digit<0))
        return -1;
    for(int i=0;n>0;i++){
        size++;
        n=n/10;
    }
    for(int i=1;i<=size;i++){
        if(number>=1){
            x=(int)(number/(pow(10,size-i)))%10;
            if(x==digit){
                a=i;
                break;
            }
        }
    }
    if(a==0){
        number=number-(int)number;
        for(int i=size+1;number>0;i++){
            x=(int)(number*10);
            number=number*10-x;
            if(x==digit){
                a=i+1;
                break;
                }
    }
    }
        
    return a;
}