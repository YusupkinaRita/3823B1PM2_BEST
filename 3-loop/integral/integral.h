#include <math.h>

double integral(double a, double b, double c, double left, double right){
    double s;
    s=(pow(right,3)*a/3.0 + right*right*b/2.0 + right*c)-(pow(left,3)*a/3.0 + left*left*b/2.0 + left*c);
    return s;
}