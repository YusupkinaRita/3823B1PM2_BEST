#include<stdio.h>
int get_time(long long angle) {
    int h, m, s;
    scanf("%d", &angle);
    s=15*angle/90;
    h=s/3600;
    m=s/60-60*h;
    s=s-h*3600-m*60;
    printf("%d %d %d", h, m, s);
    return 0; 
}