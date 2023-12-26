#include <math.h>
#include <string.h>
#include <stdlib.h>
void lower(char str[],int size){
    for(int i=0;i<size;i++){
        if(str[i]>=65&&str[i]<=90)
            str[i]=str[i]+32;
    }
}
int is_palindrom(char text[]){
    int j=0;
    int indicator=0;
    char* str=(char*)malloc(sizeof(char)*(strlen(text)+1));
    for(int i=0;i<strlen(text);i++){
        if((text[i]>=65&&text[i]<=90)||(text[i]>=97&&text[i]<=122)){
            str[j]=text[i];
            j++;
        }
    }

    lower(str,j);
    int size=strlen(text);
    if(size==0||size==1)
        return 1;

    for(int i=0;i<=j/2;i++){
        if(str[i]!=str[j-1-i])
        indicator++;
    }
    if(indicator==0)
        return 1;
    else  
        return 0;
}
