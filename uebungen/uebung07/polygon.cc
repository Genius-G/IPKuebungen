#include "polygon.hh"
#include "point.hh"
#include <cmath>
const double pi = M_PI;

//Constructor definition by an initializer list
Polygon::Polygon(const std::vector<Point>& corners)
    :_corners(corners)
{}


//Contructor definition inside the "body" like a function
Polygon::Polygon(const std::vector<double> &x, const std::vector<double> &y){
    std::vector<Point> points;
    for(int i = 0; i < x.size(); i++){
        Point tmp(x.at(i), y.at(i));
        points.at(i) = tmp;
    }
    _corners = points;
}

//definitions of methods
std::vector<Point> Polygon::get_corners(){
    return _corners;
}

//helping function for testing purposes
Polygon regular_polygon(double n){
    std::vector<Point> corners;
    for(int i = 0; i < n; i++){
        double _i = i;
        Point i_th_point(std::cos((_i/n) * 2.0*pi), std::sin((_i/n) * 2.0*pi));
        corners.push_back(i_th_point);
    }
    corners.push_back(corners.front());
    Polygon result(corners);
    return result;
}

int main(){
    //testing like the exercise demands

    //Area of a Triangle
    std::cout << "The volume of the 3rd regular Polygon is ";
    std::cout << regular_polygon(3).volume() << std::endl;

    //Area of a ... I forgot (*facepalm)
    std::cout << "The volume of the 4th regular Polygon is ";
    std::cout << regular_polygon(4).volume() << std::endl;

    //Area of a Hexagon
    std::cout << "The volume of the 6th regular Polygon is ";
    std::cout << regular_polygon(6).volume() << std::endl;

    //Area of a Octagon
    std::cout << "The volume of the 8th regular Polygon is ";
    std::cout << regular_polygon(8).volume() << std::endl;
}
