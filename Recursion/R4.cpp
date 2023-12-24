/*  Write a program in C to print the array elements using recursion. >
Test Data :
Input the number of elements to be stored in the array :6
Input 6 elements in the array :
element - 0 : 2
element - 1 : 4
element - 2 : 6
element - 3 : 8
element - 4 : 10
element - 5 : 12
Expected Output :

The elements in the array are : 2  4  6  8  10  12  */
#include <iostream>
using namespace std;

int input()
{
    int n;
    cout << "element - " << n;
    cin >> n;
    return n;
}

int is_store(int n)
{
    int arr[n];
    if (n >= 1)
    {
        return is_store(n - 1);
        arr[n] = input();
    }
}

int output(int n)
{
    cout << " " << is_store(n) << " ";
    return is_store(n - 1);
}

int main()
{
    int n;
    cout << "Input the number of elements to be stored in the array : ";
    cin >> n;
    cout << "\n";
    output(n);
    return 0;
}