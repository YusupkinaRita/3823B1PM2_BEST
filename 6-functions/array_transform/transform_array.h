#include <math.h>

void func1(double* array, int size){
    for (int i=0; i<size; i++){
        array[i]++;
    }
}

void func2(double* array, int size){
    for (int i=0; i<size; i++){
        array[i]=sqrt((fabs)(array[i]));
    }

}

void func3(double* array, int size){
    double sum=0;
    for (int i=0; i<size; i++){
        sum+=array[i];  
    }

    for (int i=0; i<size; i++){
        array[i]=pow((fabs)(array[i]),(sum/size));
    }
}
void func4(double* array, int size){
    for (int i=0; i<size; i++){
        if((int)array[i]%2==0)
            array[i]=(int)(array[i]*(-1));
        else
            array[i]=(1/(int)((fabs)(array[i])));

    }
}
void func5(double* array, int size){
    for (int i=0; i<size; i++){
        if(((int)array[i]%2==0)&&(i%2==0))
        array[i]=0;
    }
}
void func6(double* array, int size){

    for (int i=0; i<size/2; i++){
        if(array[i]<0)
            array[i]=array[i]*(-1);
        if(array[i]==0)
            array[i]++;
    }

    for (int i=size/2; i<size; i++){
        if(array[i]>0)
        array[i]=array[i]*(-1);
        if(array[i]==0)
            array[i]--;
    }
}



void transform(double* array, int size, int* comands, int comands_count){
    for(int i=0; i<comands_count; i++){
        switch(comands[i]){
            case 1: func1(array,size);break;
            case 2: func2(array,size);break;
            case 3: func3(array,size);break;
            case 4: func4(array,size);break;
            case 5: func5(array,size);break;
            case 6: func6(array,size);break;
        }
    }
    return;
}
