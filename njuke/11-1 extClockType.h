#ifndef H_ExtClockType
#define H_ExtClockType

#include "clockType.h"
#include <string>

class extClockType : public clockType {
public:
    extClockType(int hours, int minutes, int seconds, const std::string& tz = "UTC");
    extClockType();

    void setTimeZone(const std::string& tz);
    std::string getTimeZone() const;
    void printTime() const;
    void printTimeZone() const;  

private:
    std::string timeZone;
};

#endif
