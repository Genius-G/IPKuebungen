#ifndef POLYGON_HH
#define POLYGON_HH

#include "point.hh"

class Polygon{
public:
    Polygon(const std::vector<Point>& corners);
    Polygon(const std::vector<double>& x, const std::vector<double>& y);
private:
    std::vector<Point> points;
};

#endif



