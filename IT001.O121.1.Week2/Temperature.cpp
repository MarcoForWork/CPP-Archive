#include <iostream>

using namespace std;
int main()
{
    cin.tie(NULL);
    std::ios_base::sync_with_stdio(false);
    double x;
    cin >> x;
    cout << (x - 32) / 1.8 << " " << (x - 32) / 1.8 + 273.15 << endl;
    return 0;


}
