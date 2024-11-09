#include "extClockType.h"

extClockType::extClockType(int hours, int minutes, int seconds, const std::string& tz) 
    : clockType(hours, minutes, seconds), timeZone(tz) {}

extClockType::extClockType() : clockType(), timeZone("UTC") {}

void extClockType::setTimeZone(const std::string& tz) {
    timeZone = tz;
}

std::string extClockType::getTimeZone() const {
    return timeZone;
}
