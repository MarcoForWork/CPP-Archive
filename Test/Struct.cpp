#include <bits/stdc++.h>
using namespace std;

// Ten, gpa, dia  chi, msv

struct SinhVien
{
    string msv;
    string ten;
    double gpa;
    string dia_chi;
};

int main()
{
    SinhVien x;
    cin >> x.msv;
    cin.ignore();
    getline(cin, x.ten);
    cin >> x.gpa;
    cin.ignore();
    getline(cin, x.dia_chi);
    cout << x.msv << " " << x.ten << " " << x.gpa << " " << x.dia_chi;
    return 0;
}