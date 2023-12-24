// Bai14.cpp : Tìm hai số biết tổng và tỉ
/*❖ Input : Giá trị tổng của 2 số a và b và giá trị tỉ số của a / b
❖ Output : Giá trị a và giá trị b */

#include <iostream>
using namespace std;
int main()
{
    float tong, ti, a, b;
    cout << " a + b = ";
    cin >> tong;
    cout << " a / b = ";
    cin >> ti;
    // a / b = ti => a = b * ti => b(ti + 1) = tong
    b = tong / (ti + 1);
    a = tong - b;
    cout << "a = " << a << "\t" << "b = " << b;
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
