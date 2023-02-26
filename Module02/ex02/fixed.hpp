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
    Fixed(int val);
    Fixed(float val);
    Fixed(const Fixed &fix);
    float   toFloat( void ) const;
    int     toInt( void ) const;
    Fixed   &operator=(const Fixed &fix);
    int     getRawBits(void) const;
    void    setRawBits(int const val);
    bool    operator > (const Fixed &fix);
    bool    operator < (const Fixed &fix);
    bool    operator >= (const Fixed &fix);
    bool    operator <= (const Fixed &fix);
    bool    operator == (const Fixed &fix);
    bool    operator != (const Fixed &fix);
    Fixed   operator + (const Fixed &fix);
    Fixed   operator - (const Fixed &fix);
    Fixed   operator * (const Fixed &fix);
    Fixed   operator / (const Fixed &fix);
    Fixed   &operator ++ (void);
    Fixed   operator ++ (int);
    Fixed   &operator -- (void);
    Fixed   operator -- (int);
    static  Fixed &min(Fixed &a, Fixed &b);
    static  const Fixed &min(const Fixed &a, const Fixed &b);
    static  Fixed &max(Fixed &a, Fixed &b);
    static  const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream& output, const Fixed& fx);