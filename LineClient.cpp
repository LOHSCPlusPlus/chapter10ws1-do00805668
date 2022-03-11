#include "Line.h"
#include <iostream>
using namespace std;

int main() {
  Point a;
  Point b(10,10);
  Line Bar(a,b);
  Bar.printLine();
  cout << endl;
  cout << "Line length is: ";
  cout << Bar.lineLength();
    return 0;
}
