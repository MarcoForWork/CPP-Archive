#include <iostream>
using namespace std;

struct DonThuc
{
    float He_so;
    int Bac;

    void Nhap()
    {
        cout << "Nhap he so: ";
        cin >> He_so;
        cout << "Nhap bac cua he so: ";
        cin >> Bac;
    }

    void Xuat()
    {
        cout << He_so << "x^" << Bac;
    }

    // Operator overload
    DonThuc operator+(const DonThuc other)
    {
        DonThuc Tong;
        if (Bac == other.Bac)
        {
            Tong.He_so = He_so + other.He_so;
            Tong.Bac = Bac;
            return Tong;
        }
        else
        {
            cout << "ERROR!\0";
            Tong.He_so = 0.0;
            Tong.Bac = 0;
        }
        return Tong;
    }
};

int main()
{
    DonThuc dt1, dt2, dt3;
    dt1.Nhap();
    dt2.Nhap();
    dt3 = dt1 + dt2;
    dt3.Xuat();
    return 0;
}