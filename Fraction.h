#pragma once
#include <cstdint>
#include <cmath>
#include <iostream>

class Fraction{
private:
    double _dano;
    int32_t _numerator;
    uint32_t _denominator;
    void MethodSocr();
public:
    Fraction(double dano){
        _dano = dano;
    };
    void DoubleToFraction();

};