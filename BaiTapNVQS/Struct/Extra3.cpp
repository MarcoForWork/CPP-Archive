#include <iostream>
#include <cmath>
#define MAX 100
using namespace std;

struct ComplexNumber
{
    float Re;
    float Im;

    void input();
    void display_output();

    ComplexNumber operator+(const ComplexNumber &other)
    {
        ComplexNumber Sum;
        Sum.Re = Re + other.Re;
        Sum.Im = Im + other.Im;
        return Sum;
    }

    ComplexNumber operator-(const ComplexNumber &other)
    {
        ComplexNumber Difference;
        Difference.Re = Re - other.Re;
        Difference.Im = Im - other.Im;
        return Difference;
    }

    ComplexNumber operator*(const ComplexNumber &other)
    {
        ComplexNumber Product;
        Product.Re = Re * other.Re - Im * other.Im;
        Product.Im = Re * other.Im + other.Re * Im;
        return Product;
    }

    ComplexNumber operator/(const ComplexNumber &other)
    {
        ComplexNumber Quotient;
        Quotient.Re = (Re * other.Re + Im * other.Im) / (pow(other.Re, 2) + pow(other.Im, 2));
        Quotient.Im = (Im * other.Re - Re * other.Im) / (pow(other.Re, 2) + pow(other.Im, 2));
        return Quotient;
    }
};

void ComplexNumber::input()
{
    cout << "Enter reality part: ";
    cin >> Re;
    cout << "Enter imaginary part: ";
    cin >> Im;
    cout << "\n";
}

void ComplexNumber::display_output()
{
    cout << Re << " + " << Im << "i\n";
}

int main()
{
    ComplexNumber comp_num_1, comp_num_2, Sum, Difference, Product, Quotient;

    cout << "Enter first complex number: \n";
    comp_num_1.input();
    cout << "Enter second complex number: \n";
    comp_num_2.input();

    Sum = comp_num_1 + comp_num_2;
    cout << "The sum value: ";
    Sum.display_output();

    Difference = comp_num_1 - comp_num_2;
    cout << "The difference value: ";
    Difference.display_output();

    Product = comp_num_1 * comp_num_2;
    cout << "The product value: ";
    Product.display_output();

    Quotient = comp_num_1 / comp_num_2;
    cout << "The quotient value: ";
    Quotient.display_output();

    return 0;
}
