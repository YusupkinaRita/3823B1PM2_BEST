#include <math.h>
#include <string.h>
#include <stdio.h>


struct Patient
{
    char name[10];
    struct Patient* nextPatient;
};



unsigned char get_queue_len(struct Patient* persons){
    int num=1;
    for(int i=0;;i++){
        if(persons[i].nextPatient!=NULL)
        num++;
        else
        break;
    }
    return num;
}
