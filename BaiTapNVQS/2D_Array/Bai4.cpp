// Đếm số từ trong 1 chuỗi
#include <iostream>
#include <string.h>
#define MAX 100
using namespace std;

void input(char s[MAX])
{
    cout << "Enter string: ";
    gets(s);
}

int count(char s[MAX])
{
    int count = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if ((int)s[i] == 32)
            count++;
    }
    return count + 1;
}

int main()
{
    char s[MAX];
    input(s);
    cout << count(s);
    return 0;
}