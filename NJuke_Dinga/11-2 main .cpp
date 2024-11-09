#include "dateType.h"
#include <iostream>

using namespace std;

int main()
{
    int month, day, year;

    cout << "Enter date (month day year): ";
    cin >> month >> day >> year;

    dateType date1(month, day, year);

    cout << "Date 1: ";
    date1.printDate();

    if (date1.isLeapYear()) {
        cout << "This is a leap year." << endl;
    } else {
        cout << "This is not a leap year." << endl;
    }

    return 0;
}
