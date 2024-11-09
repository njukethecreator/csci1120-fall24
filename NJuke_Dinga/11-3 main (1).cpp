#include "cylinderType.h"
#include <iostream>

using namespace std;

int main()
{
    cylinderType myCylinder(5.0, 10.0);
    myCylinder.print();

    cout << "\nSetting new radius and height..." << endl;
    myCylinder.setRadius(7.0);
    myCylinder.setHeight(14.0);

    myCylinder.print();

    return 0;
}

