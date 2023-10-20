long long change(int a, int b, int c, int d){
    long long change, r;
    if ((c>a)||((c==a)&&(d>=b))){
        r=(c-a)*100LL;
        change=r+d-b;
        return change;}
    else
        return -1;
    
}