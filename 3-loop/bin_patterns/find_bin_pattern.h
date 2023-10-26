#include <math.h>
#include <stdio.h>

char find_bin_pattern(int number){
    int a=0;
    while(number>0){
        if ((number&7)==5)
            a++;
        number=number>>1;
    }
    return a;
}