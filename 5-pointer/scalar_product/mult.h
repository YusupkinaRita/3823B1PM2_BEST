#include <math.h>

int scalar_product(int* vec1, int* vec2, int size){
    int v1=0, v2=0, z1=0, z2=0;
    int x1=*vec1;
    int y1=*(vec1+1);
    z1=*(vec1+2);
    int x2=*vec2;
    int y2=*(vec2+1);
    z2=*(vec2+2);
    int l1=sqrt(x1*x1 + y1*y1+ z1*z1 );
    int l2=sqrt(x2*x2 + y2*y2 + z2*z2 );
    int v1v2=x1*x2 + y1*y2+ z1*z2;
    if(z1==z2){
        l1=sqrt(x1*x1 + y1*y1);
        l2=sqrt(x2*x2 + y2*y2 );
        v1v2=x1*x2 + y1*y2;
    }
    if((x1==x2) && (y1==y2))
    return 0;
    else{
    double angle= acos((double)v1v2/(double)(l1*l2));
    angle=angle*180/3.1415;
    return (int)angle;
    }
}
