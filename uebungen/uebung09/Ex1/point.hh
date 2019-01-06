#ifndef POINT_HH
#define POINT_HH

// Interface und Implementierung sind hier der Einfachheit
// halber in einer Datei

class Point
{

public:

  // default constructor
  Point();

  // constructor für übergebene Koordinaten
  Point(double x, double y);

  // Accessors

  double x() const;

  double y() const;

  void set_x(double value);

  void set_y(double value);

private:

  double _x;
  double _y;

};

#endif // POINT_HH
