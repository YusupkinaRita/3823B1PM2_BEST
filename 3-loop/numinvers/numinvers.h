#include<math.h>
int num_invers(int num){
    int x=0, inv=0, size=0,n;
    n=num;
    if(num<=0)
        return 0;
    for(int i=0;n>0;i++){
        size=i+1;
        n=n/10;
    }
    for(int i=1;num>0;i++){
        x=num%10;
        num=num/10;
        inv=inv+x*(pow(10,(size-i)));
    }
    return inv;
}