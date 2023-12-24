#include <iostream>
#include <string>

using namespace std;

int a, b;
string c;

int main()
{
    cin >> a >> b;

    /*Difference between "=" and "=="
    "=" is an assignment operator used to assign the value to variable
    "==" is condition if a equal b*/

    c = (a == b) ? "1" : "0";

    cout << c;

    return 0;
}