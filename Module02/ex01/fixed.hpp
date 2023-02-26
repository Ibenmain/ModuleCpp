#pragma once
#include <iostream>
#include <fstream>
#include <cctype>
#include <cmath>
#include <cstring>

class Fixed
{
private:
    int fixed_point;
    static const int nb_frct_bit = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const int val);
    Fixed(const float val);
    Fixed(const Fixed &fix);
    float   toFloat( void ) const;
    int     toInt( void ) const;
    Fixed   &operator=(const Fixed& f);
    int     getRawBits(void) const;
    void    setRawBits(int const val);
};
std::ostream &operator<<(std::ostream& output, const Fixed& fx);