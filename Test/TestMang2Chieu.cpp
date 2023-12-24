#include <iostream>
using namespace std;

// Mảng hai chiều
int main()
{
    int arr[5][10] = {{1, 2, 3}, {4, 5, 6}};
    int n, m;
    cin >> n >> m;
    int a[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < m; j++)
        {
            cout << a[i][j];
        }
        cout << "\n";
    }
    return 0;
}