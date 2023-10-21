#include<stdio.h>
#include<math.h>
int get_years(int seconds) {
    int years;
    years=1970+seconds/(3600*24*31*12);
    return years; 
}

int get_month(int seconds) {
    seconds=(seconds/(3600*24*31))%12;
    return seconds; 
}

int get_day(int seconds) {
    seconds=(seconds/(3600*24))%31;
    return seconds; 
}

int get_hours(int seconds) {
    seconds=(seconds/3600)%24;
    return seconds; 
}

int get_minutes(int seconds) {
    seconds=(seconds/60)%60;
    return seconds; 
}

int get_seconds(int seconds) {
    seconds=seconds%60;
    return seconds;
}


int get_magical_value(int seconds) {
    int year = get_years(seconds);
    int month = get_month(seconds);
    int day = get_day(seconds);
    int hours = get_hours(seconds);
    int minutes = get_minutes(seconds);
    int second = get_seconds(seconds);
<<<<<<< HEAD
    int x= (pow(((year+month)/(1+day+second)),2))+((minutes+minutes/(1+hours))/(1+hours));
    return x; 
=======
    return 0; // Not implementation
>>>>>>> 73e9291e52882346103cae301afc4058a0375e8c
}