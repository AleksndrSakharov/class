#pragma once
#include <cstdint>
#include <iostream>

class Fraction{
private:
    int32_t _numerator;
    uint32_t _denominator;
    void MethodSocr();
public:

    Fraction();

    Fraction(int32_t numerator, uint32_t denominator){
        _numerator = numerator;
        if (denominator == 0) throw "Error! Denominator = 0";
    }

    Fraction(const Fraction& fraction);

    void SetNumerator(int32_t new_numerator);
    inline int32_t GetNumerator(){return _numerator;};

    void SetDenominator(uint32_t new_denominator);
    inline uint32_t GetDenominator(){return _denominator;};

    inline double GetDouble(){return _numerator / _denominator;};

    
    void Print(){
        MethodSocr();
        std::cout << _numerator << "/" << _denominator << std::endl;
    }
    // Перегрузка оператора
    friend std::ostream& operator<<(std::ostream &os, const Fraction &fraction){
        return os << fraction._numerator << " " << fraction._denominator;          //(!!!!!!)
    }
};