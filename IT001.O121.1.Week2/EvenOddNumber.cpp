#include <iostream>
#include <iomanip>

using namespace std;

int a;

int main()
{ 
    string b;
    cin >> a;
    b = (a % 2 == 0) ? "0" : "1";
    cout << b;

    return 0;

}