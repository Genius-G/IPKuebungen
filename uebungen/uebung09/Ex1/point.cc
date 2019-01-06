#include "point.hh"

Point::Point()
  : _x(0.0)
  , _y(0.0)
{}

Point::Point(double x, double y)
  : _x(x)
  , _y(y)
{}

double Point::x() const
{
  return _x;
}

double Point::y() const
{
  return _y;
}

void Point::set_x(double value)
{
    _x = value;
}

void Point::set_y(double value)
{
    _y = value;
}
