#include "Rectangle.h"
#include <iostream>
#include <cmath>

using namespace std;

rectangleType::rectangleType(Line l, Line h){
  length = l;
  height = h;

  //area = length.lineLength() * height.lineLength();
}
double rectangleType::calcArea(){
  area = length.lineLength() * height.lineLength();
  return 0;
}
void rectangleType::print(){
cout << "Length coordinates: ";
  length.printLine();
cout << length.lineLength() << " Long" << endl;
cout << "Height coordinates: ";
  height.printLine();
cout << height.lineLength() << " Long" << endl;
cout << "Area is: " << area;
}