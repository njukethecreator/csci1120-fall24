#include "cylinderType.h"
#include <iostream>

using namespace std;

void cylinderType::print()
{
    cout << "Radius: " << getRadius() << endl;
    cout << "Height: " << height << endl;
    cout << "Volume: " << volume() << endl;
    cout << "Surface Area: " << surfaceArea() << endl;
}

void cylinderType::setHeight(double h)
{
    height = (h >= 0) ? h : 0;
}

double cylinderType::getHeight()
{
    return height;
}

double cylinderType::volume()
{
    return area() * height;  // Volume = base area * height
}

double cylinderType::surfaceArea()
{
    return 2 * area() + circumference() * height;  // Surface area = 2 * base area + circumference * height
}

cylinderType::cylinderType(double r, double h) : circleType(r)
{
    setHeight(h);
}
