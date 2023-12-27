#include <math.h>
#include <string.h>
#include <stdio.h>

typedef struct 
{
    unsigned char day;
    unsigned char month;
    unsigned int year;
} BornDate;

typedef struct 
{
    char name[10];
    char surname[20];
    BornDate borndate;
} Person;



double calc_avg_age(Person* persons, int num_persons){
    double sum=0.0;
    for(int i=0;i<num_persons;i++){
        sum+=(2023-persons[i].borndate.year);
    }
    double avgage=sum/(double)num_persons;

    return avgage;
}
