long fib(int m){
    int f1=0,f2=1,sum=0;
    while(f1<=m){
        if(f2>m)
            sum=sum+f1;
        else
            sum=sum+f1+f2;
        f1=f1+f2;
        f2=f2+f1;
    }
    return sum;
}