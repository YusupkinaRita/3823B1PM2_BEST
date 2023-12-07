#include <math.h>
#include <string.h>

void lower(char* str){
    for(int i=0;i<strlen(str);i++){
        if(str[i]>=65&&str[i]<=90)
            str[i]=str[i]+32;
    }

}
