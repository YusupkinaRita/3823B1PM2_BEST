#include <math.h>

int find_elem(int left, int right, int number, int max_iter){
    int i = 0;
    int x=0, t=0, l=0, d=0;
    l=left;
    for(int i1=1;i1<=max_iter;i1++){
    x=(left + right) / 2;
    if (x == number) {
        t=i1;
        break;}
    if (x < number) 
        left = x + 1;
    else 
        right =x - 1;
    }
    i=(number-l)*t;

    return i;
}