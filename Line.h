#include "Point.h"

class Line {
private:
    Point start;
    Point end;
public:
    Line(Point s, Point e);
    double lineLength();
    void printLine();
};
