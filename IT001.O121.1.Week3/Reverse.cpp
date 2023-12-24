#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, reverse_num = 0, temporary;
    cin >> n;
    while (n != 0)
    {
        temporary = n % 10;
        reverse_num = reverse_num * 10 + temporary;
        n /= 10;
    }
    cout << reverse_num;
    return 0;
}