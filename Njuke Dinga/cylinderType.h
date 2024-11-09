#ifndef cylinderType_H
#define cylinderType_H

#include "circleType.h"

class cylinderType : public circleType
{
public:
    void print();
    void setHeight(double h);
    double getHeight();
    double volume();
    double surfaceArea();
    cylinderType(double r = 0, double h = 0);

private:
    double height;
};

#endif
