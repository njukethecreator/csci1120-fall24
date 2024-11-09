#include <iostream>
#include <string>
#include "extClockType.h"

int main() {
    extClockType clock(10, 30, 45, "EST");
    clock.printTime();
    std::cout << " " << clock.getTimeZone() << std::endl;

    extClockType defaultClock;
    defaultClock.printTime();
    std::cout << " " << defaultClock.getTimeZone() << std::endl;

    return 0;
}
