#include "fixed.hpp"

Fixed::Fixed(const Fixed &fix)
{
        std::cout << "Copy constructor called" << std::endl;
        *this = fix;
}

Fixed::Fixed(const int val)
{
    std::cout << "Int constructor called" << std::endl;
    fixed_point = val << nb_frct_bit;
}

Fixed::Fixed(const float val)   
{
    std::cout << "Float constructor called" << std::endl;
    fixed_point = (int)round(val * (float)(1 << nb_frct_bit));
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

int Fixed::toInt( void ) const
{
    return ((int)(fixed_point >> nb_frct_bit));
}

float Fixed::toFloat( void ) const
{
    return ((float)(fixed_point / (float)(1 << nb_frct_bit)));
}

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    fixed_point = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

std::ostream &operator<<(std::ostream& output, const Fixed& fx)
{
    output << fx.toFloat();
    return (output);
}
