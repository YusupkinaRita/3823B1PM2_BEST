#include <math.h>

int find_elem(int left, int right, int number, int max_iter){
    int i = 0;
    int x=0, t=0, l=0;
    l=left;
    for(int i1=1;i1<=max_iter;i1++){
        if(left==l)
            x=(right-left)/2;
        else
            x=left+(right-left)/2;
        if(x==number){
            t=i1;break;}
        if(number>x)
            left=x;
        if(number<x)
            right=x;
    }
    i=(number-l)*t;

    return i;
}