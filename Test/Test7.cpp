#include <iostream>
#include <vector>

// Hàm kiểm tra số nguyên tố
bool isPrime(int num)
{
    if (num <= 1)
        return false;
    if (num <= 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;
    for (int i = 5; i * i <= num; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}

int main()
{
    int y, n;
    std::cin >> y; // Nhập số y
    std::cin >> n; // Nhập số phần tử của mảng a

    std::vector<int> a;

    int num = 2;
    while (a.size() < n)
    {
        if (isPrime(num))
        {
            a.push_back(num);
        }
        num++;
    }

    int count = 0;
    for (int i = 0; i < a.size(); i++)
    {
        int number = a[i];
        while (number > 0)
        {
            if (number % 10 == y)
            {
                count++;
                break;
            }
            number /= 10;
        }
    }

    std::cout << count << std::endl; // In số phần tử chứa y có trong mảng a

    return 0;
}
