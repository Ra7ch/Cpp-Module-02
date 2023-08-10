#include <iostream>

class Fixed {
private:
    int value; // The fixed-point number value
    static const int fractionalBits = 8; // Number of fractional bits (always 8)

public:
    // Default constructor
    Fixed();

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
};