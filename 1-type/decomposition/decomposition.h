int reverse(int number) {
    int a, b, c, d;
    a=number/1000;
    b=(number/100)%10;
    c=(number/10)%10;
    d=number%10;
    number=d*1000+c*100+b*10+a;
    return number; 
}

double decomposition(int number) {
    int a, b, c, d;
    double x;
    a=(number/1000)*1000;
    b=((number/100)%10)*100;
    c=((number/10)%10)*10;
    d=number%10;
    x=(4.0/((1.0/a)+(1.0/b)+(1.0/c)+(1.0/d)));
    
    return x;
}

int append(int number, int start, int end) {
    if (start>0)
        number=start*100000+number*10+end;
    else
        number=((-1)*start*100000+number*10+end)*(-1);
    return number; 
}
