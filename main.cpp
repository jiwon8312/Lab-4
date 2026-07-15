#include "alarm.h"
#include "timeOfDay.h"
#include <iostream>

namespace Jang
{
    bool compareTimeOfDay(const timeOfDay& t1, const timeOfDay& t2)
    {
        return t1.getHour() == t2.getHour() && t1.getMinute() == t2.getMinute();
    }
}

int main()
{
    using namespace Jang;
    alarm a1; a1.print();
    alarm a2{timeOfDay(8,30), true}; a2.print();
    if (compareTimeOfDay(a1.getWakeTime(),a2.getWakeTime()))
       std::cout << "same\n";
    else std::cout << "different\n";

    return 0;
}
