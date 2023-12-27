#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void stick_print(int x,int n, FILE* pf){
        if(n==0){
            for(int i=1;i<x-n;i++){
                fputc(' ',pf);
            }
            fputc('^',pf);
            fputc('\n', pf);
        }
        else{
            for(int i=1;i<x-n;i++){
                fputc(' ',pf);
            }
            for(int i=1;i<=n;i++){
                fputc('^',pf);
            }
            fputc('|',pf);
            for(int i=1;i<=n;i++){
                fputc('^',pf);
            }
            fputc('\n', pf);
        }
    if(n<x)
    stick_print(x, n+1, pf);
    }



void star_print(int x, FILE* pf){
    for(int i=0;i<x-1;i++){
        fputc(' ',pf);
    }
    fputc('*',pf);
    fputc('\n', pf);

}
char* tree_writer(int x){
    FILE* pf;
    pf=fopen("tree.txt", "w");
    star_print(x,pf);
    stick_print(x,0,pf);
    for (int i=0;i<x-3;i++){
        fputc(' ',pf);
    }
    fputc('_',pf);
    fputc('_',pf);
    fputc(' ',pf);
    fputc('_',pf);
    fputc('_',pf);

    fclose(pf);

    char* str=malloc(sizeof(char)*9);
    snprintf(str, 9,  "tree.txt");
   // str={"tree.txt"};
    //str[9]='\0';
    return str;
}
