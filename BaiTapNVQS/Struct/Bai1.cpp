#include <iostream>
#include <cmath>
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
        if (He_so == 1.0 && ((float)Bac == 1.0 || Bac == 1))
        {
            cout << "x";
        }
        else if (He_so == 1.0 || (int)He_so == 1)
        {
            if ((float)Bac < 0.0 || Bac < 0)
            {
                He_so = (float)1 / He_so;
                Bac = abs(Bac);
                cout << He_so << "x^" << Bac;
            }
            else if (Bac == 0)
            {
                cout << 1;
            }
            else if (Bac == 1)
            {
                cout << "x";
            }
        }
        else if (He_so == 0.0)
        {
            if (Bac != 0)
                cout << 0;
            else
            {
                cerr << "ERROR!";
                cout << He_so << "x^" << Bac;
            }
        }
        else
        {
            if (Bac < 0)
            {
                He_so = (float)1 / He_so;
                Bac = abs(Bac);
                cout << He_so << "x^" << Bac;
            }
            else if (Bac == 0)
            {
                cout << He_so;
            }
            else if (Bac == 1)
            {
                cout << He_so << "x";
            }
            else if (Bac > 0)
            {
                cout << He_so << "x^" << Bac;
            }
        }
    }

    void TinhGiaTriDonThuc(float x)
    {
        cout << "Nhap tham so x: ";
        cin >> x;
        float Ketqua = He_so * pow(x, Bac);
        cout << "\nGia tri cua don thuc la: " << Ketqua << "\n";
    }

    // Operator overload
    DonThuc operator+(const DonThuc &other)
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
            cerr << "ERROR!\n";
            Tong.He_so = 0.0;
            Tong.Bac = 0;
        }
        return Tong;
    }

    DonThuc operator-(const DonThuc &other)
    {
        DonThuc Hieu;
        if (Bac == other.Bac)
        {
            Hieu.He_so = He_so - other.He_so;
            Hieu.Bac = Bac;
        }
        else
        {
            cerr << "ERROR!\n";
            Hieu.He_so = 0.0;
            Hieu.Bac = 0;
        }
        return Hieu;
    }

    DonThuc operator*(const DonThuc &other)
    {
        DonThuc Tich;
        Tich.He_so = He_so * other.He_so;
        Tich.Bac = Bac + other.Bac;
        return Tich;
    }

    DonThuc operator/(const DonThuc &other)
    {
        DonThuc Thuong, bac_temp;
        Thuong.He_so = He_so / other.He_so;
        Thuong.Bac = Bac - other.He_so;
        return Thuong;
    }
};

int main()
{
    DonThuc dt, dt1, dt2, Tong, Hieu, Tich, Thuong;
    float ThamSo;

    // Tinh gia tri don thuc
    cout << "TINH GIA TRI DON THUC\n";
    dt.Nhap();
    dt.TinhGiaTriDonThuc(ThamSo);

    // Tong, hieu, tich, thuong
    cout << "\nTINH TONG/HIEU/TICH/THUONG CUA HAI DON THUC\n";
    dt1.Nhap();
    dt2.Nhap();

    Tong = dt1 + dt2;
    cout << "\nTong: ";
    Tong.Xuat();
    Hieu = dt1 - dt2;
    cout << "\nHieu: ";
    Hieu.Xuat();
    Tich = dt1 * dt2;
    cout << "\nTich: ";
    Tich.Xuat();
    Thuong = dt1 / dt2;
    cout << "\nThuong: ";
    Thuong.Xuat();

    return 0;
}