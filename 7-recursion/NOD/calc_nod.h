#include <math.h>

int find_nod(int first, int second){

    int r=second%first;
    if (r==0)
    return first;
    if (find_nod(r,first)==0)
        return r;
    
    return find_nod(r,first);

}
int nod(int first, int second){
    if(first<1|| second<1)
    return -1;
    return find_nod(first, second);
}
