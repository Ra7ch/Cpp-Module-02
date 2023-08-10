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

    // Overload of the insertion (<<) operator
    friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
};
