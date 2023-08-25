#include "Fixed.hpp"

// Default constructor
Fixed::Fixed() : value(0) { /*std::cout << "Default constructor called" << std::endl;*/ }

Fixed::Fixed(const int initial_value) : value(initial_value << fractionalBits) { /*std::cout << "Int constructor called" << std::endl;*/ }

Fixed::Fixed(const float initial_value) : value(roundf((initial_value * (1 << fractionalBits)))) {
    /*std::cout << "Float constructor called" << std::endl;*/
}

// Copy constructor
Fixed::Fixed(const Fixed& other) { /*std::cout << "Copy constructor called" << std::endl;*/ *this = other; }

// Copy assignment operator overload
Fixed& Fixed::operator=(const Fixed& other) {
    /*std::cout << "Copy assignment operator called" << std::endl;*/
    if (this != &other) {
        value = other.value;
    }
    return *this;
}

// Member function to get the raw value of the fixed-point number
int Fixed::getRawBits() const {
    /*std::cout << "getRawBits member function called" << std::endl;*/
    return value;
}

// Member function to set the raw value of the fixed-point number
void Fixed::setRawBits(int const raw) {
   /* std::cout << "setRawBits member function called" << std::endl;*/
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

// Comparison operators
bool Fixed::operator>(const Fixed& other) const { return value > other.value; }
bool Fixed::operator<(const Fixed& other) const { return value < other.value; }
bool Fixed::operator>=(const Fixed& other) const { return value >= other.value; }
bool Fixed::operator<=(const Fixed& other) const { return value <= other.value; }
bool Fixed::operator==(const Fixed& other) const { return value == other.value; }
bool Fixed::operator!=(const Fixed& other) const { return value != other.value; }

// Arithmetic operators
Fixed Fixed::operator+(const Fixed& other) const { return Fixed(toFloat() + other.toFloat()); }
Fixed Fixed::operator-(const Fixed& other) const { return Fixed(toFloat() - other.toFloat()); }
Fixed Fixed::operator*(const Fixed& other) const { return Fixed(toFloat() * other.toFloat()); }
Fixed Fixed::operator/(const Fixed& other) const {
    if (other.toFloat() == 0) {
        std::cout << "Cant divide on ";
        return (0);
    }
    return Fixed(toFloat() / other.toFloat());
}

// Increment/Decrement operators
Fixed& Fixed::operator++() { value++; return *this; }
Fixed Fixed::operator++(int) { Fixed tmp(*this); operator++(); return tmp; }
Fixed& Fixed::operator--() { value--; return *this; }
Fixed Fixed::operator--(int) { Fixed tmp(*this); operator--(); return tmp; }

// Static member function to find minimum of two fixed-point numbers
Fixed& Fixed::min(Fixed& a, Fixed& b) { return (a < b) ? a : b; }
const Fixed& Fixed::min(const Fixed& a, const Fixed& b) { return (a < b) ? a : b; }

// Static member function to find maximum of two fixed-point numbers
Fixed& Fixed::max(Fixed& a, Fixed& b) { return (a > b) ? a : b; }
const Fixed& Fixed::max(const Fixed& a, const Fixed& b) { return (a > b) ? a : b; }

// Overload of the insertion (<<) operator
std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}

// Destructor
Fixed::~Fixed() { /*std::cout << "Destructor called" << std::endl;*/ }
