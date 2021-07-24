//
// Created by Diego Hernandez on 7/23/21.
//

//specification file for the dayType class type
#include <iostream>

class dayType
{
public:
    void setDay(char dow[3]);
    void printDay();
    void returnDay(char& day);
    void returnTomorrow(char& day[3]);
    void returnYesterday(char& day[3]]);
    void updateDate(int step);

    void
private:
    char dayOfWeek;

};
