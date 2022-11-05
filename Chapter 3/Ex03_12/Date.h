//Ex03.12 Date.h
#ifndef DATE_H
#define DATEH

class Date
{
public:
    Date( int sYear, int sMonth, int sDay)
    :year(sYear), day(sDay)
    {
        setMonth(sMonth);
    }

    void setYear(int sYear){
        year = sYear;
    }
    void setMonth(int smonth){
        if(smonth < 0 || smonth > 12)
            smonth = 1;
        
        month = smonth;
    }
    void setDay(int sDay){
        day = sDay;
    }
    int getYear()  { return year; }
    int getMonth() { return month; }
    int getDay()   { return day; }
private:
    int day, month, year;
};

#endif