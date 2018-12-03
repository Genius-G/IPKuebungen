#ifndef POINT_HH
#define POINT_HH

class Point{
    public:
        Point();
        Point(double _x, double _y);
        double get_x() const;
        double get_y() const;
        void set_x(double _x);
        void set_y(double _y);

    private:
        double x;
        double y;

};

#endif
