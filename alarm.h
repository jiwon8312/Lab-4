#pragma once
#include <iostream>
#include "timeOfDay.h"

namespace Jang
{
    class alarm
    {
        timeOfDay wakeTime;
        bool inActive;
    public:
        alarm(timeOfDay t = timeOfDay{15,15}, bool a = false)
        : wakeTime{t}, inActive{a} {}
        void print() const 
        {
            wakeTime.print();
            std::cout << "Alarm is " << ((inActive) ? "on" : "off") << std::endl;
        }
        const timeOfDay& getWakeTime() const
        {
            return wakeTime;
        }
        void setWakeTime(const timeOfDay& t)
        {
            wakeTime = t;
        }
    };
} 