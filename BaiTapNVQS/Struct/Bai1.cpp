#include <iostream>
#include <string.h>
using namespace std;

struct SinhVien
{
    string ten;
    int mssv;
    int gpa;
    string diachi;
};

int main()
{

    SinhVien Phuoc;
    cin.ignore();
    getline(cin, Phuoc.ten);
    cin >> Phuoc.mssv;
    cin >> Phuoc.gpa;
    cin.ignore();
    getline(cin, Phuoc.diachi);

    cout
        << Phuoc.ten << " " << Phuoc.mssv << " " << Phuoc.gpa << " " << Phuoc.diachi;
    return 0;
}