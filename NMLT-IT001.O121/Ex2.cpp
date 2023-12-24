// Cho 1 ký tự chữ thường. In ra ký tự chữ hoa tương ứng

// Hàm tolowertolower() có chức năng chuyển đổi chữ "HOA" sang chữ "THƯỜNG"
// Hàm toupper() có chức năng chuyển đổi chữ "THƯỜNG" sang chữ "HOA"

#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>

using namespace std;

char normal;

int main()
{
    cout << "Hay nhap chu thuong: ";
    cin >> normal;

    cout << (char)toupper(normal);

    return 0;
}