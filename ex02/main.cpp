#include "Fixed.hpp"

int main() {
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));


    std::cout << (b <= a) << std::endl;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;
    std::cout << Fixed(6) / Fixed(2) << std::endl;
    std::cout << Fixed(6) / Fixed(0) << std::endl;
    std::cout << Fixed(6) * Fixed(2) << std::endl;
    std::cout << Fixed(1.5f) + Fixed(2.6f) << std::endl;

    Fixed c(0);
    c = c / Fixed(1);
    std::cout << c << std::endl;

    return 0;
}