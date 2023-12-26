#include <math.h>
#include <string.h>
#include <stdio.h>

struct BornDate {
    unsigned char day;
    unsigned char month;
    unsigned int year;
};

struct Pasport{
    char* name;
    char* surname;
    char gender; //M or F
    struct BornDate bornDate;
    char* country;
};

struct Person
{
    char driver_license;
    struct Pasport pasport;
    char* working_specialty;
};



unsigned char paper_please_game(struct Person* persons, unsigned char size){
    int pass_num=0;
    
    for(int i=0;i<size; i++){
        int indicator=0;
        if((2023-persons[i].pasport.bornDate.year)>40)
            indicator++;
        if(persons[i].pasport.country!="Arstocka"&&persons[i].pasport.country!="Arcanistan")
            indicator++;
        if(persons[i].working_specialty!="programmist"&&persons[i].working_specialty!="major"&&persons[i].working_specialty!="collective farmer")
            indicator++;
        if(persons[i].driver_license!=66)
            indicator++;
        if (indicator==0)
            pass_num++;

        
    }
    return pass_num;
}
