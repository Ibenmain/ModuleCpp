#include "fixed.hpp"

Fixed::Fixed()
{
    fixed_point = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(int val)
{
    fixed_point = val << nb_frct_bit;
}

Fixed::Fixed(float val)
{
    fixed_point = (int)round(val * (float)(1 << nb_frct_bit));
}

Fixed::Fixed(const Fixed &fix)
{
    *this = fix;
}

float   Fixed::toFloat( void ) const
{
    return ((float)(fixed_point / (float)(1 << nb_frct_bit)));
}

int     Fixed::toInt( void ) const
{
    return ((int)(fixed_point >> nb_frct_bit));
}

int     Fixed::getRawBits(void) const
{
    return (fixed_point);
}

void    Fixed::setRawBits(int const val)
{
    fixed_point = val;
}

bool    Fixed::operator > (const Fixed &fix)
{
    return (this->fixed_point > fix.fixed_point);
}

bool    Fixed::operator < (const Fixed &fix)
{
    return (this->fixed_point < fix.fixed_point);
}

bool    Fixed::operator >= (const Fixed &fix)
{
    return (this->fixed_point >= fix.fixed_point);
}

bool    Fixed::operator <= (const Fixed &fix)
{
    return (this->fixed_point <= fix.fixed_point);
}

bool    Fixed::operator == (const Fixed &fix)
{
    return (this->fixed_point == fix.fixed_point);
}

bool    Fixed::operator != (const Fixed &fix)
{
    return (this->fixed_point != fix.fixed_point);
}

Fixed   &Fixed::operator=(const Fixed &fix)
{
    this->fixed_point = fix.fixed_point;
    return (*this);
}

Fixed   Fixed::operator + (const Fixed &fix)
{
    Fixed ret;

    ret.setRawBits(this->fixed_point + fix.fixed_point);
    return (ret);
}

Fixed   Fixed::operator - (const Fixed &fix)
{
    Fixed ret;

    ret.setRawBits(this->fixed_point - fix.fixed_point);
    return (ret);
}

Fixed   Fixed::operator * (const Fixed &fix)
{

    Fixed ret;

    ret.fixed_point = this->fixed_point * fix.toFloat();
    return (ret);
}

Fixed   Fixed::operator / (const Fixed &fix)
{

    Fixed ret;

    if (fix.getRawBits() == 0)
    {
        std::cout << "You can't divide number by 0" << std::endl;
        return (-1);
    }
    ret.setRawBits(this->fixed_point / fix.fixed_point);
    return (ret);
}

Fixed   &Fixed::operator ++ (void)
{
    this->fixed_point += 1;
    return (*this); 
}

Fixed   Fixed::operator ++ (int)
{
    Fixed tmp(*this);
    this->fixed_point += 1;
    return (tmp);
}

Fixed   &Fixed::operator -- (void)
{
    this->fixed_point -= 1;
    return (*this);
}

Fixed   Fixed::operator -- (int)
{
    Fixed tmp(*this);
    this->fixed_point -= 1;
    return (tmp);
}

Fixed   &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return (a);
    return (b);
}

const   Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if ((Fixed)a < b)
        return (a);
    return (b);
}

Fixed   &Fixed::max(Fixed &a, Fixed &b)
{
     if (a > b)
        return (a);
    return (b);
}

const   Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
     if ((Fixed)a > b)
        return (a);
    return (b);
}

std::ostream &operator<<(std::ostream& output, const Fixed& fx)
{
    output << fx.toFloat();
    return (output);
}
