int maxmin(int input[], int size){
    int min=-1000;
    for(int i=0;i<size;i++){
        if((input[i-1]>input[i])&&(input[i]<input[i+1])&&(input[i]>=min))
            min=input[i];
    }
    if((input[size-1]<input[size-2])&&(input[size-1]>=min))
        min=input[size-1];
    return min;
}