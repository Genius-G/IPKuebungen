#include "polygon.hh"
#include "point.hh"
#include <iostream>
#include <cmath>
const double pi = M_PI;

//Constructor definition by an initializer list
Polygon::Polygon(const std::vector<Point> &corners)
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
        std::cout << i_th_point.x() << std::endl;
        std::cout << i_th_point.y() << std::endl;
        corners.at(i) = i_th_point;
    }
    Polygon result(corners);
    return result;
}


//main function to test the classes
int main(){
    Point test(4,3);
    std::vector<Point> v = {{test}};
    Polygon Lilie(v);

    std::cout << "The corners of Polygon Lilie are ";
    std::cout << Lilie.get_corners().at(0).x() << ", ";
    std::cout << Lilie.get_corners().at(0).y() << std::endl;
    std::cout << "The number of corners of Polygon Lilie are ";
    std::cout << Lilie.corners() << std::endl;
    std::cout << "The volume of Polygon Lilie is ";
    std::cout << Lilie.volume() << std::endl;

    //testing like the exercise demands
    std::cout << "The volume of the regular Polygon is ";
    std::cout << regular_polygon(5).volume() << std::endl;
}
