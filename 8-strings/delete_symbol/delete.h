#include <math.h>
#include <string.h>

void DelSymbol1(char *str, char sym){
    int ind=0;
    int am=0;
    for(int i=0;i<strlen(str);i++){
        if (str[i]==sym)
        am++;
    }
    while(am!=0){
        for(int i=0;i<strlen(str);i++){
            if(str[i]==sym)
                ind=i;
        }
        for (int i = ind;i<strlen(str); i++) {
            str[i] = str[i+1];
        }
        am--;

    }
}

