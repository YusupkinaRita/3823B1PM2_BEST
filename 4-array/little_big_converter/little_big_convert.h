#include <math.h>

unsigned int little_big_convert(unsigned int input){
    unsigned char x1, x2, x3, x4;
    x1=input;
    x2=input>>8;
    x3=input>>16;
    x4=input>>24;
    unsigned int l_end= x1*pow(256,3)+x2*256*256+x3*256+x4;

    return l_end;
}