#include "Fixed.hpp"

class Point {
private :
    Fixed x;
    Fixed y;

public :
    //Default constructor
    Point ();
    Point (Fixed a, Fixed b);

    //copy constructor
    Point (const Point& other);

    //copy assignment operator overload
    Point& operator=(const Point& other);

    //Member function to get the value of x
    const Fixed& get_x () const;

    //Member function to get the value of y
    const Fixed& get_y () const;

    //destructor
    ~Point ();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
