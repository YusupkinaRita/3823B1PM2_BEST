#include <math.h>

int calcsize(void* memory){
    int size=0;
    int* p=memory;
    for(int i=0; i<10000000000;i++){
        int x=*(p+i);
        if((p[i]==11)&&(p[i+1]==47)){
        //if((*(p+i)==11)&&(*(p + i + 1)==47))
        size=i+2;
        break;
        }
    }
//TT
    

    return size;
}
