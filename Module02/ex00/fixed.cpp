#include "fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    fixed_point = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;  
}

Fixed::Fixed(const Fixed &fix)
{
        std::cout << "copy constructor called" << std::endl;
        fixed_point = fix.fixed_point;
}

Fixed   &Fixed::operator = (const Fixed &f)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixed_point = f.fixed_point;
    return (*this);
}

void    Fixed::setRawBits(int const val)
{
    fixed_point = val;
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (fixed_point);
}
