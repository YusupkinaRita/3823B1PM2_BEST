#include <math.h>
#include <string.h>

int calculate_expression(char expression[]){
    int res=0;
    int num=0;
    char operation=0;
    if(expression[0]=='-')
        operation='-';
    else
    operation='+';

    for (int i = 0; i<strlen(expression); i++) {
        if (expression[i] >= '0' && expression[i] <= '9') {
            num = num * 10 + (expression[i] - '0');
        }
        if (expression[i] == '+' || expression[i] == '-'|| i==strlen(expression)-1 ) {
        if (operation == '+') 
        res += num;
        else 
        res -= num;
        num = 0;
        operation = expression[i];
        }
        if (expression[i]=='-'&& expression[i+1]=='+'||expression[i]=='+'&& expression[i+1]=='-') 
        return -1;
    }
    return res;
}