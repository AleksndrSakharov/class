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

void Fraction::SetDenominator(uint32_t new_denominator){
    if (new_denominator != 0)
    _denominator = new_denominator;
}

void Fraction::SetNumerator(int32_t new_numerator){
    _numerator = new_numerator;
}


void Fraction::DoubleToFraction(){
    double Res = Fraction::GetDouble();
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
    _numerator = static_cast<int32_t>(Res);
    _denominator = denom;
    Fraction::MethodSocr();
    std::cout << "Fraction: " << Fraction::GetDouble() << " = " << _numerator << "/" << _denominator << std::endl;
}



Fraction::Fraction(){
        _numerator = 0;
        _denominator = 1;
    }

Fraction::Fraction(const Fraction& fraction){
    _numerator = fraction._numerator;
    _denominator = fraction._denominator;
}