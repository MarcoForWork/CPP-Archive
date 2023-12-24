#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int date, month, year;

// Check if leap year or normal year
int year_type(int n)
{
    int yeartype;
    if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
    {
        yeartype = 1;
    }
    else
    {
        yeartype = 0;
    }
    return yeartype;
}

int main()
{
    cin >> date >> month >> year;

    // Check if leap year or normal year
    int yeartype = year_type(year);

    // Check the year if it appropriate
    if (year > 0)
    {

        // Check the month if it appropriate
        if (month > 0 && month <= 12)
        {

            // Check the day if it appropriate
            switch (month)
            {
            case 1:
                if (date > 0 && date <= 31)
                {
                    cout << date << "/" << month << "/" << year << " la ngay hop le.";
                }
                else
                {
                    cout << date << "/" << month << "/" << year << " la ngay khong hop le.";
                }
                break;
            case 2:
                if (yeartype == 1)
                {
                    if (date > 0 && date <= 29)
                    {
                        cout << date << "/" << month << "/" << year << " la ngay hop le.";
                    }
                    else
                    {
                        cout << date << "/" << month << "/" << year << " la ngay khong hop le.";
                    }
                }
                else
                {
                    if (date > 0 && date <= 28)
                    {
                        cout << date << "/" << month << "/" << year << " la ngay hop le.";
                    }
                    else
                    {
                        cout << date << "/" << month << "/" << year << " la ngay khong hop le.";
                    }
                }
                break;
            case 3:
                if (date > 0 && date <= 31)
                {
                    cout << date << "/" << month << "/" << year << " la ngay hop le.";
                }
                else
                {
                    cout << date << "/" << month << "/" << year << " la ngay khong hop le.";
                }
                break;
            case 4:
                if (date > 0 && date <= 30)
                {
                    cout << date << "/" << month << "/" << year << " la ngay hop le.";
                }
                else
                {
                    cout << date << "/" << month << "/" << year << " la ngay khong hop le.";
                }
                break;
            case 5:
                if (date > 0 && date <= 31)
                {
                    cout << date << "/" << month << "/" << year << " la ngay hop le.";
                }
                else
                {
                    cout << date << "/" << month << "/" << year << " la ngay khong hop le.";
                }
                break;
            case 6:
                if (date > 0 && date <= 30)
                {
                    cout << date << "/" << month << "/" << year << " la ngay hop le.";
                }
                else
                {
                    cout << date << "/" << month << "/" << year << " la ngay khong hop le.";
                }
                break;
            case 7:
                if (date > 0 && date <= 31)
                {
                    cout << date << "/" << month << "/" << year << " la ngay hop le.";
                }
                else
                {
                    cout << date << "/" << month << "/" << year << " la ngay khong hop le.";
                }
                break;
            case 8:
                if (date > 0 && date <= 31)
                {
                    cout << date << "/" << month << "/" << year << " la ngay hop le.";
                }
                else
                {
                    cout << date << "/" << month << "/" << year << " la ngay khong hop le.";
                }
                break;
            case 9:
                if (date > 0 && date <= 30)
                {
                    cout << date << "/" << month << "/" << year << " la ngay hop le.";
                }
                else
                {
                    cout << date << "/" << month << "/" << year << " la ngay khong hop le.";
                }
                break;
            case 10:
                if (date > 0 && date <= 31)
                {
                    cout << date << "/" << month << "/" << year << " la ngay hop le.";
                }
                else
                {
                    cout << date << "/" << month << "/" << year << " la ngay khong hop le.";
                }
                break;
            case 11:
                if (date > 0 && date <= 30)
                {
                    cout << date << "/" << month << "/" << year << " la ngay hop le.";
                }
                else
                {
                    cout << date << "/" << month << "/" << year << " la ngay khong hop le.";
                }
                break;
            case 12:
                if (date > 0 && date <= 31)
                {
                    cout << date << "/" << month << "/" << year << " la ngay hop le.";
                }
                else
                {
                    cout << date << "/" << month << "/" << year << " la ngay khong hop le.";
                }
                break;
            }
        }
        else
        {
            cout << "Thang khong hop le.";
        }
    }
    else
    {
        cout << "Nam khong hop le.";
    }
    return 0;
}