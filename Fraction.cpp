#include "Fraction.h"

void Fraction::MethodSocr(){
    int32_t numerator = abs(_numerator), denominator = _denominator;
    if (numerator == 0 || denominator == 0) return;
    while (numerator != denominator || numerator < 0 || denominator < 0){
        if (numerator > denominator) numerator -= denominator;
        else denominator -= numerator;
    }
    _numerator /= numerator;
    _denominator /= denominator;
}


void Fraction::DoubleToFraction(){
    double Res = _dano;
    int32_t flag = 1;
    if (Res < 0){
        flag = -1;
        Res *= flag;
    }
    uint32_t denom = 1;
    int16_t count = 0;
    while (fmod(Res, 1) != 0 && count < 15){
        Res *= 10;
        count++;
    }
    denom = pow(10, count);
    Res *= flag;
    _numerator = Res;
    _denominator = denom;
    Fraction::MethodSocr();
    std::cout << "Fraction: " << _dano << " = " << _numerator << "/" << _denominator << std::endl;
}