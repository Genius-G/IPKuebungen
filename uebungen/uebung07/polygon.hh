#ifndef POLYGON_HH
#define POLYGON_HH

#include "point.hh"
#include <vector>

class Polygon{
    public:

        //Constructor
        Polygon(const std::vector<Point>& corners);
        Polygon(const std::vector<double>& x,
                const std::vector<double>& y);

        //methods
        std::vector<Point> get_corners();
        std::size_t corners() const{
            return _corners.size();
        }
        const Point& corner(std::size_t i) const{
            return _corners.at(i);
        }
        double volume() const{
            if(this->corners() == 0 || this->corners() == 1 || this->corners() == 0){
                return 0;
            }
            else{
                double sum = 0;
                for(int i = 0; i < this->corners(); i++){
                  double incr = this->corner(i).x() * this->corner(i+1).y() - this->corner(i+1).x() * this->corner(i).y();
                  sum += incr;
                }

                return (1/2) * sum;
            }
        }


    private:

        //members
        std::vector<Point> _corners;
};

#endif //POLYGON_HH



