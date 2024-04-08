#include "time.h"
#include <iostream>

using namespace std;

Time::Time()
{
    hour = 0;
    minute = 0;
    second = 0;
}

Time::Time(int hh, int mm, int ss)
{
    setTime(hh, mm, ss);
}

void Time::setTime(int hh, int mm, int ss)
{
    hour = hh < 0 || hh > 23 ? 0 : hh;
    minute = mm < 0 || mm > 59 ? 0 : mm;
    second = ss < 0 || ss > 59 ? 0 : ss;
}

void Time::print()
{
    cout << "{" << hour << ":" << minute << ":" << second << "}\n";
}