#include "Point.hpp"

//Default constructor
Point::Point () : x(0), y(0) {}
Point::Point (Fixed a, Fixed b) : x(a), y(b) {}

//copy constructor
Point::Point (const Point& other) : x(other.x), y(other.y) {}

//copy assignment operator overload
Point& Point::operator=(const Point& other) {
    if (this != &other) {
        x = other.x;
        y = other.y;
    }
    return *this;
}

//Member function to get the value of x
const Fixed& Point::get_x () const { return x; }

//Member function to get the value of y
const Fixed& Point::get_y () const { return y; }

//destructor
Point::~Point () {}