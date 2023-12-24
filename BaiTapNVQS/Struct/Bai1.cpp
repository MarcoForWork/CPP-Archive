#include <iostream>
using namespace std;

struct DonThuc
{
    int HeSo;
    int Bac;
};

DonThuc input()
{
    DonThuc dt;
    cout << "Nhap he so: ";
    cin >> dt.HeSo;
    cout << "Nhap bac: ";
    cin >> dt.Bac;
}

DonThuc display_output(const DonThuc &dt)
{
    cout << dt.HeSo << "x^" << dt.Bac;
}

DonThuc Tong(const DonThuc &dt1, const DonThuc &dt2, const DonThuc &ketqua)
{
    if (dt1.Bac != dt2.Bac)
    {
        cout << "Khong the thuc hien phep tinh vi khac bac";
    }
    else
    {
        ketqua.HeSo = dt1.HeSo + dt2.HeSo;
        ketqua.Bac = dt1.Bac;
    }
}

int main()
{
    DonThuc dt1, dt2, ketqua;
    dt1 = input();
    dt2 = input();
    cout << "Don thuc 1: " << display_output(dt1);
    cout << "Don thuc 2: " << display_output(dt2);
    ketqua = Tong(dt1, dt2);
    cout << "Ket qua la: " << display_output(ketqua);
    return 0;
}