int get_module(int a, int b, int c) {
    //int x=(a*b)-(((a*b)/c)*c);
    int x=a*(b-(b/c)*c);
    return x; 
}