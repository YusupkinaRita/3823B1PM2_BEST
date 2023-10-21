#include<stdio.h>
int get_time(long long angle) {
    int h, m, s;
    s=(angle*15/90)%60;
    m=((angle*15/90)/60)%60;
    h=((angle*15/90)/3600)%24;
    return h*10000+m*100+s;
}