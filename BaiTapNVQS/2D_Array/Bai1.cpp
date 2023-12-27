// Cộng 2 ma trận
#include <iostream>
using namespace std;

void input(int arr[][1200], int &m, int &n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void is_sum(int arr[][1200], int brr[][1200], int m, int n)
{

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] + brr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int a[100][1200], b[100][1200], m, n;

    cin >> m >> n;
    input(a, m, n);
    input(b, m, n);

    is_sum(a, b, m, n);
    return 0;
}
