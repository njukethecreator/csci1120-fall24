#ifndef H_ExtClockType
#define H_ExtClockType

#include "clockType.h"
#include <string>

class extClockType : public clockType {
public:
    void setTimeZone(const std::string& tz);
    std::string getTimeZone() const;

    extClockType(int hours, int minutes, int seconds, const std::string& tz);
    extClockType();

private:
    std::string timeZone;
};

#endif
