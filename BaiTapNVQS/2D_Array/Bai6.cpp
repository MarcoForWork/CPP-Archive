// Bỏ các ký tự khoảng trắng thừa
#include <iostream>
#include <cstring>
#define MAX 100
using namespace std;

void input(char s[MAX])
{
    cout << "Enter string: ";
    cin.getline(s, MAX);
}

void display_output(const char result_s[MAX])
{
    cout << "Result string: " << result_s;
}

void erase_space(char s[MAX], char result_s[MAX])
{
    int j = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] != ' ')
        {
            result_s[j] = s[i];
            j++;
        }
    }
    result_s[j] = '\0';
}

int main()
{
    char s[MAX], result_s[MAX];
    input(s);
    erase_space(s, result_s);
    display_output(result_s);
}