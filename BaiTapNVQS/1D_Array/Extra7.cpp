// Vị trí số nguyên tố đầu tiên trong mảng nếu có
#include <iostream>
#define MAX 100
using namespace std;

void input(int array[MAX], int &size)
{
    cout << "Enter array's size: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> array[i];
    }
}

bool is_Prime(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
    }
    if (count == 2)
        return true;
    else
        return false;
}

void find_first_prime_num_position(int array[MAX], int size, int prime_num_position)
{
    prime_num_position = 0;
    for (int i = 0; i < size; i++)
    {
        if (is_Prime(array[i]))
        {
            prime_num_position = i + 1;
            break;
        }
    }
    cout << "The first prime number is on the " << prime_num_position << " position";
}

int main()
{
    int array[MAX], size, prime_num_position;
    input(array, size);
    find_first_prime_num_position(array, size, prime_num_position);
    return 0;
}