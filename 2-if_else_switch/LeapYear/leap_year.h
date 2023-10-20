int LeapYear(int year){
    if(year==0)
        return 0;
    else{
        if(year%4==0)
            return 1;
        else
            return 0;
    }
}