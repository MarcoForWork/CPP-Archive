/*
Viết chương trình sử dụng struct để biểu diễn và hiển thị giờ, phút, giây và tính
toán khoảng thời gian giữa 2 mốc thời gian(h/m/s)
 */
#include <iostream>
using namespace std;

struct Time
{
    int hour;
    int minute;
    int second;

    static void input(Time &time_1, Time &time_2);
    static void Time_Duration(Time time_1, Time time_2);

    Time operator-(Time &other)
    {
        Time time;
        if (second > other.second)
        {
            time.second = 60 - second + other.second;
            other.minute -= 1;
        }
        else
            time.second = other.second - second;
        if (minute > other.minute)
        {
            time.minute = 60 - minute + other.minute;
            other.hour -= 1;
        }
        else
            time.minute = other.minute - minute;
        time.hour = other.hour - hour;
        return time;
    }
};

void Time::input(Time &time_1, Time &time_2)
{
    cout << "Enter first time: ";
    cin >> time_1.hour >> time_1.minute >> time_1.second;
    cout << "Enter second time: ";
    cin >> time_2.hour >> time_2.minute >> time_2.second;
}

void Time::Time_Duration(Time time_1, Time time_2)
{
    Time time_duration;
    time_duration = time_1 - time_2;
    cout << "Duration between 2 time is: " << time_duration.hour << ":" << time_duration.minute << ":" << time_duration.second;
}

int main()
{
    Time time_1, time_2;
    Time::input(time_1, time_2);
    Time::Time_Duration(time_1, time_2);
    return 0;
}