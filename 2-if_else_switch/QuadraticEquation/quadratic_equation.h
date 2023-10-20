#include<math.h>
int QuadraticEquation(double a, double b, double c){
    double x1, x2, d, im1, im2, re, sum ;
    d=b*b-4.0*a*c;
    if (d>=0){
        x1=((-1.0)*b+sqrt(d))/2.0*a;
        x2=((-1.0)*b-sqrt(d))/2.0*a;
        sum=x1+x2;
    }
    else{
        im1=(sqrt(d*(-1)))/2*a;
        im2=((-1)*sqrt(d*(-1)))/2*a;
        re=((-1)*b)/2*a;
        sum=re+re+im1+im2;
    }
    if((sum-(int)sum)<0.5)
        sum=(int)sum;
    else
        sum=(int)sum+1;
    return sum;
}