#include <iostream>
using namespace std;
void nhap(int a[], int &n)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
void max(int a[], int n)
{
    int max = a[0];
    int min = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            min = max;
            max = a[i];
        }
        else if (a[i] > min && a[i] < max)
        {
            min = a[i];
        }
    }
    if (min == max)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << min << endl;
    }
}
int main()
{
    const int maxsize = 100;
    int a[maxsize], n;
    nhap(a, n);
    max(a, n);
    return 0;
}