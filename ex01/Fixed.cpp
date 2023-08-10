#include "Fixed.hpp"

// Default constructor
Fixed::Fixed() : value(0) { std::cout << "Default constructor called" << std::endl; }

Fixed::Fixed(const int initial_value) : value(initial_value << fractionalBits) { std::cout << "Int constructor called" << std::endl; }

Fixed::Fixed(const float initial_value) : value(roundf((initial_value * (1 << fractionalBits)))) {
    std::cout << "Float constructor called" << std::endl;
}

// Copy constructor
Fixed::Fixed(const Fixed& other) { std::cout << "Copy constructor called" << std::endl; *this = other; }

// Copy assignment operator overload
Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        value = other.value;
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

// Member function to convert value to float.
float Fixed::toFloat() const {
    float x;
    x = (float)((float)(value) / (1 << fractionalBits));
    return x;
}

// Member function to convert value to int.
int Fixed::toInt() const {
    return value >> fractionalBits;
}

// Overload of the insertion (<<) operator
std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}

// Destructor
Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }
