#include "point.hh"
#include <iostream>

int main(){

//task(a)
    //Testing Point in 1D
    std::array<double, 1> test1 = {42};
    Point<double, 1> Bella(test1);
    std::cout << "The Coordinates of Point Bella are (";
    std::cout << Bella.x(0) << ")";
    std::cout << std::endl;

    //Testing Point in 2D
    std::array<double, 2> test2 = {4.2,23};
    Point<double, 2> Larissa(test2);
    std::cout << "The Coordinates of Point Larissa are (";
    std::cout << Larissa.x(0) << ", " << Larissa.x(1) << ")";
    std::cout << std::endl;

    //Testing Point in 3D
    std::array<double, 3> test3 = {234, 342, 55.55};
    Point<double, 3> Katjana(test3);
    std::cout << "The Coordinates of Point Katjana are (";
    std::cout << Katjana.x(0) << ", " << Katjana.x(1) << ", ";
    std::cout << Katjana.x(2) << ") ";
    std::cout << std::endl;

//task(b)
    //Testing the Norm of the three points
    std::cout << "The Norm of Point Bella is " << Bella.norm();
    std::cout << std::endl;
    std::cout << "The Norm of Point Larissa is " << Larissa.norm();
    std::cout << std::endl;
    std::cout << "The Norm of Point Katjana is " << Katjana.norm();
    std::cout << std::endl;

//task(c)
    std::cout << std::endl;
    std::cout << "The Answer to the universe and everything is ";
    std::cout << Bella[0] << std::endl;
}
