#include "Line.h"
#include <iostream>
#include <cmath>

using namespace std;

Line::Line(Point s, Point e) {
    start = s;
    end = e;
}

void Line::printLine(){
  cout << "Start is: ";
  start.print();
  cout << "End is: ";
  end.print();
}

double Line::lineLength(){
  double xVal = pow(start.getX()-end.getX(),2);
  double yVal = pow(start.getY()-end.getY(),2);
  double dist = sqrt(xVal+yVal);
  return dist;
}