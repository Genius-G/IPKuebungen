#include "point.hh"

//Constructor definition inside the "body"
Point::Point(){
    _x = 0;
    _y = 0;
}

//Constructor definition by initializer list
Point::Point(double x, double y)
    : _x(x)
    , _y(y)
{}

//defintion of the methods
double Point::x() const{
    return _x;
}

double Point::y() const{
    return _y;
}

void Point::set_x(double x){
    _x = x;
}

void Point::set_y(double y){
    _y = y;
}
