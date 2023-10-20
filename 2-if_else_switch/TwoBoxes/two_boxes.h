int twoboxes(double x1, double y1, double z1, double x2, double y2, double z2){
    double v1, v2;
    v1=x1*y1*z1;
    v2=x2*y2*z2;
    if((v1<=0)||(v2<=0))
        return 0;
    else{
        if ((v1<v2)&&(x1<x2)&&(y1<y2))
            return 1;
        else{
            if((v2<v1)&&(x2<x1)&&(y2<y1))
            return 1;
            else
            return 0;
        }
    }
}