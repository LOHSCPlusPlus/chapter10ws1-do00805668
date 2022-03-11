#include "Rectangle.h"
#include <iostream>

using namespace std;

int main() {
    Point x;
    Point y(0,10);
    Point w;
    Point z(10,0);

    Line m(x,y);
    Line e(w,z);

    rectangleType Rectangle(m,e);
    Rectangle.calcArea();

    Rectangle.print();
  
    return 0;
}
