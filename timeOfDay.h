#pragma once
#include <iostream>

namespace Jang
{
    class timeOfDay
    {
        int hour;
        int minute;
        void testHour()
        {
            if (hour < 0 || hour > 23)
            {
                std::cout << "Invalid hour\n";
                std::exit(1);
            }
        }
        void testMinute()
        {
            if (minute < 0 || minute > 59)
            {
                std::cout << "Invalid minute\n";
                std::exit(1);
            }
        }
    public:
        timeOfDay(int h = 1, int m =1): hour{h}, minute{m}
        {testHour(); testMinute();}
        void input()
        {
            std::cout << "Enter hour: ";
            std::cin >> hour; testHour();
            std::cout << "Enter minute: ";
            std::cin >> minute; testMinute();
        }
        void setHour(int h)
        {
            hour = h; testHour();
        }
        void setMinute(int m)
        {
            minute = m; testMinute();
        }
        void print() const
        {
            if (hour < 10) std::cout << "0";
            std::cout << hour << ":";
            if (minute < 10) std::cout << "0";
            std::cout << minute;
        }
        int getHour() const 
        {
            return hour;
        }
        int getMinute() const
        {
            return minute;
        }
    };
}