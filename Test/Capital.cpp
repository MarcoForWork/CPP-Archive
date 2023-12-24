#include <iostream>
using namespace std;

char normal(char &Capital)
{
    Capital = int(Capital) + 32;
    return Capital;
}

int main()
{
    char Capital;
    cin >> Capital;
    cout << normal(Capital);
}