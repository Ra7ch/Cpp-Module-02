#include <iostream>
#include <cmath>

class Fixed {
private:
    int value; // The fixed-point number value
    static const int fractionalBits = 8; // Number of fractional bits (always 8)

public:
    // Default constructor
    Fixed();

    Fixed(const int initial_value);

    Fixed(const float initial_value);

    // Copy constructor
    Fixed(const Fixed& other);

    // Copy assignment operator overload
    Fixed& operator=(const Fixed& other);

    // Destructor
    ~Fixed();

    // Member function to get the raw value of the fixed-point number
    int getRawBits() const;

    // Member function to set the raw value of the fixed-point number
    void setRawBits(int const raw);

    // Member function to convert value to float.
    float toFloat() const;

    // Member function to convert value to int.
    int toInt() const;

    // Comparison operators
    bool operator>(const Fixed& other) const;
    bool operator<(const Fixed& other) const;
    bool operator>=(const Fixed& other) const;
    bool operator<=(const Fixed& other) const;
    bool operator==(const Fixed& other) const;
    bool operator!=(const Fixed& other) const;

    // Arithmetic operators
    Fixed operator+(const Fixed& other) const;
    Fixed operator-(const Fixed& other) const;
    Fixed operator*(const Fixed& other) const;
    Fixed operator/(const Fixed& other) const;

    // Increment/Decrement operators
    Fixed& operator++();
    Fixed operator++(int);
    Fixed& operator--();
    Fixed operator--(int);

    // Static member function to find minimum of two fixed-point numbers
    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);

    // Static member function to find maximum of two fixed-point numbers
    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);

    // Overload of the insertion (<<) operator
    friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
};
