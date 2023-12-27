// Đổi kí tự đầu tiên của mỗi từ thành chữ in hoa
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
    cout << "The results string is: " << result_s;
}

void upper(char s[MAX], char result_s[MAX])
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[0] >= 'a' && s[0] <= 'z')
        {
            result_s[0] = toupper(s[0]);
        }
        else
        {
            result_s[0] = s[0];
        }

        bool nextcap;
        if (s[i] == ' ')
        {
            nextcap = true;
        }
        else
        {
            nextcap = false;
        }

        if (nextcap)
        {
            result_s[i + 1] = toupper(s[i + 1]);
        }
        else
        {
            result_s[i + 1] = s[i + 1];
        }
    }
}

int main()
{
    char s[MAX], result_s[MAX];
    input(s);
    upper(s, result_s);
    display_output(result_s);
    return 0;
}
