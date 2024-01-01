#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b)
{
    if (a == 0 || b == 0)
    {
        return 0;
    }
    return abs(a * b) / gcd(a, b);
}

struct Fraction
{
    int numerator;
    int denominator;

    void input();

    Fraction operator+(const Fraction &other)
    {
        Fraction sum;
        if (denominator == other.denominator)
        {
            sum.numerator = numerator + other.numerator;
            sum.denominator = denominator;
        }
        else
        {
            sum.denominator = lcm(denominator, other.denominator);
            sum.numerator = numerator * (sum.denominator / denominator) + other.numerator * (sum.denominator / other.denominator);
        }
        return sum;
    }

    Fraction operator-(const Fraction &other)
    {
        Fraction difference;
        if (denominator == other.denominator)
        {
            difference.numerator = numerator - other.numerator;
            difference.denominator = denominator;
        }
        else
        {
            difference.denominator = lcm(denominator, other.denominator);
            difference.numerator = numerator * (difference.denominator / denominator) - other.numerator * (difference.denominator / other.denominator);
        }
        return difference;
    }

    Fraction operator*(const Fraction &other)
    {
        Fraction product;
        product.numerator = numerator * other.numerator;
        product.denominator = denominator * other.denominator;
        return product;
    }

    Fraction operator/(const Fraction &other)
    {
        Fraction quotient;
        quotient.numerator = numerator * other.denominator;
        quotient.denominator = denominator * other.numerator;
        return quotient;
    }
};

void Fraction::input()
{
    cout << "\nEnter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;
}

int main()
{
    Fraction fraction_A, fraction_B, sum, difference, product, quotient;
    cout << "Enter fraction A: ";
    fraction_A.input();
    cout << "\n";
    cout << "Enter fraction B: ";
    fraction_B.input();

    sum = fraction_A + fraction_B;
    difference = fraction_A - fraction_B;
    product = fraction_A * fraction_B;
    quotient = fraction_A / fraction_B;

    cout << "\nThe sum of fraction A and B is: " << sum.numerator << " divided by " << sum.denominator << "\n";
    cout << "The difference of fraction A and B is: " << difference.numerator << " divided by " << difference.denominator << "\n";
    cout << "The product of fraction A and B is: " << product.numerator << " divided by " << product.denominator << "\n";
    cout << "The quotient of fraction A and B is: " << quotient.numerator << " divided by " << quotient.denominator;

    return 0;
}