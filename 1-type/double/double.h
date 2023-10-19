#include<math.h>
bool compare_double(double x, double y) {
  
    if ((-0.00001<=x-y) && (x-y<=0.00001))
        return true;
    else
        return false;
}

int get_nearest_int(double x) {
    if(x+0.5>=(int)x+1)
        x=(int)x+1;
    else
        x=(int)x;
        return x;
}

double get_fractional(double x) {
    if(x>=0)
        x=x-(int)x;
    else
        x=(x-((int)x-1));
    return x;
}
