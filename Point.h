class Point{
    public:
        Point();
        Point(double Dx, double Dy);
        double getX();
        double getY();
        void setX(double Dx);
        void setY(double Dy);
        void print();
        double calcDistance(Point ye);
    private:
        double x;
        double y;
};

