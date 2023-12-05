#include <math.h>
#include <string.h>

double convert(char num[]){
    double x=0, n=0;
    int id=0, s=0;
    double d=0;
    if(num[0]!=45){
        for (int i=0;num[i]!=46;i++){
            x=x*10 + (num[i]-48);
            id=i+1;
            }
    }
    else{
        for (int i=1;num[i]!=46;i++){
            x=x*10 + (num[i]-48);
            id=i+1; 
            }
    }

    for (int i=id+1;num[i]!='\0';i++){
        d=d*10+(num[i]-48);
        s++;
    }
    if(d!=0)
    n=x+d/(pow(10,s));
    else
    n=x;
    if(num[0]==45)
    n=(-1)*n;

    return n;
}
