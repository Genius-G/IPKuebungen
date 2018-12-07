#ifndef POINT_HH
#define POINT_HH

class Point{
   public:

        //Constructor
        Point();
        Point(double _x, double _y);

        //methods
        double x() const;
        double y() const;
        void set_x(double _x);
        void set_y(double _y);

    private:

        //members
        double _x;
        double _y;

};

#endif //POINT_HH
