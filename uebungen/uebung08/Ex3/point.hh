#ifndef POINT_HH
#define POINT_HH

/*
Die Aufgabe 3 von Blatt 8 ist aufgeteilt in Aufgabe (a), die damit beginnt, dass
man die Musterlösung von Blatt 6 runter lädt und die Datei point.cc und point.hh
zusammenführt. Dennoch brauchen wir eine .cc Datei zum Testen.
Die restlichen Änderungen sind alle mit einem einem Kommentar hinter der Anweisung versehen.
*/

#include <array>
#include <cmath>

template <typename Coord, int dim> //Starting accordingly to the exercise
class Point
{

public:

  // default constructor
  Point(){
      _point.fill(0.0);    //Fivth Bullet Point from task(a)
  }

  // constructor für übergebene Koordinaten
  Point(std::array<Coord, dim> point){
      _point = point;    //Sixth Bullet Point from task(a)
  }

  // Export
  using Coordinate = Coord;    //Third Bullet Point from task(a)
  static const int dimension = dim;    //Fourth Bullet Point from task(a)

  // Accessors

  Coord& x(int i){
      return _point.at(i);    //Seventh Bullet Point from task(a)
  }

  // Methodes
  //task(b)
  Coord norm() const{
      Coord sum = 0;
      for(Coord entry: _point){
          sum += pow(entry,2);
      }
      return sqrt(sum);
  }
  //end of task(b)

  //task(c)
  Coord& operator[](int i){
      return _point.at(i);
  }

  const Coord& operator[](int i) const{
      return _point.at(i);
  }
  //end of task(c)

private:

  std::array<Coord, dim> _point;    //Second Bullet Point from task(a)

};

#endif // POINT_HH
