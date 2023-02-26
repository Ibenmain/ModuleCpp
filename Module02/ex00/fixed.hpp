#pragma once
#include <iostream>
#include <fstream>
#include <cctype>
#include <cstdio>
#include <cstring>

class Fixed
{
private:
    int fixed_point;
    static const int nb_frct_bit = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed& fix);
    Fixed   &operator=(const Fixed& f);
    int     getRawBits(void) const;
    void    setRawBits(int const val);
};

