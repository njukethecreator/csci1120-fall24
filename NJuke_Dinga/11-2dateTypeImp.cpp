#include "dateType.h"
#include <iostream>

using namespace std;

bool dateType::isLeapYear()
{
    return (dYear % 4 == 0 && dYear % 100 != 0) || (dYear % 400 == 0);
}

void dateType::setDate(int month, int day, int year)
{
    if (month < 1 || month > 12) {
        cout << "Invalid month. Setting default to 1." << endl;
        dMonth = 1;
    } else {
        dMonth = month;
    }

    if (day < 1 || (month == 2 && isLeapYear() && day > 29) ||
        (month == 2 && !isLeapYear() && day > 28) ||
        ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) ||
        day > 31) {
        cout << "Invalid day. Setting default to 1." << endl;
        dDay = 1;
    } else {
        dDay = day;
    }

    if (year < 0) {
        cout << "Invalid year. Setting default to 1900." << endl;
        dYear = 1900;
    } else {
        dYear = year;
    }
}

int dateType::getDay() const
{
    return dDay;
}

int dateType::getMonth() const
{
    return dMonth;
}

int dateType::getYear() const
{
    return dYear;
}

void dateType::printDate() const
{
    cout << dMonth << "-" << dDay << "-" << dYear << endl;
}

dateType::dateType(int month, int day, int year)
{
    setDate(month, day, year);
}
