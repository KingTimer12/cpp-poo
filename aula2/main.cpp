#include <iostream>
#include "time.h"

using namespace std;

int main()
{
    Time time1;
    Time time2(16, 34, 50);

    time1.print();
    time2.print();

    time1.setTime(110, 59, 20);
    time1.print();

    return 0;
}
