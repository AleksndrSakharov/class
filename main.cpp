#include "Fraction.h"

//laba 2
//1) fraction(double x)-> numerator denominator типо вещ число в числитель и знаменатель
//2) method socr drobi(private)
int main(){
    // Fraction fraction;
    // fraction.IsValid = true;

    // Fraction fraction1();


    Fraction fraction = Fraction();
    int32_t numerator;
    uint32_t denominator;
    std::cin >> numerator;
    std::cin >> denominator;
    fraction.SetNumerator(numerator);
    fraction.SetDenominator(denominator);
    // std::cout << fraction.GetNumerator() << "/" << fraction.GetDenominator() << std::endl;
    // std::cout << fraction << std::endl;
    std::cout << std::endl << fraction.GetDouble() << std::endl;
    // fraction.DoubleToFraction();
    fraction.Print();


    // Fraction fraction2_copy = Fraction(fraction2);
    // std::cout << fraction2_copy << std::endl;

    // Fraction* fraction3 = new Fraction();
    // fraction3->SetDenominator(0);
    // fraction3->SetNumerator(100);
    // std::cout << fraction3->GetDouble() << std::endl;
    // std::cout << fraction3->GetNumerator() << "/" << fraction3->GetDenominator() << std::endl;
    return 0;
}