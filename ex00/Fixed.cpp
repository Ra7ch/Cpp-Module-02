#include "Fixed.hpp"

// Default constructor
Fixed::Fixed() : value(0) { std::cout << "Default constructor called" << std::endl; }

// Copy constructor
Fixed::Fixed(const Fixed& other) { *this = other; std::cout << "Copy constructor called" << std::endl; }

// Copy assignment operator overload
Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        value = other.getRawBits();
    }
    return *this;
}

// Member function to get the raw value of the fixed-point number
int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return value;
}

// Member function to set the raw value of the fixed-point number
void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    value = raw;
}

// Destructor
Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }
