char left_more(double input[], unsigned int size){
    int n=0;
    for(int i=0;i<size-1;i++){
        if(input[i+1]-input[i]>0)
        n++;
    }
    return n;
}