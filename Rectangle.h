#include "Line.h"

class rectangleType{
    private:
        Line length;
        Line height;
        double area;
    public:
        rectangleType(Line l, Line h);
        double calcArea();
        void print();
};