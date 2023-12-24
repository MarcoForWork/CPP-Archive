/*
0. Vo nghiem
1. Ham bac nhat
2. Ham bac hai
3. Vo so nghiem
4. Nghiem bac nhat
5. Nghiem kep
6. Nghiem x1 x2
*/
#include <iostream>
#include <cmath>

#define Delta(int a, int b, int c) pow(b, 2) - 4 * a *c;

using namespace std;

int check(int a, int b, int c)
{
    if (a == 0)
    {
        return 1;
    }
    else
    {
        return 2
    }
    float Hambacnhat(int a, int b, int c)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                return 3
            }
            else
            {
                return 0;
            }
        }
        else
            return 4;
    }
    float Hambachai(int a, int b, int c)
    {
        double delta = Delta(a, b, c) if (delta < 0)
        {
            return 0;
        }
        else if (delta = 0)
        {
            return 4;
        }
        else if (delta == 0)
        {
            return 5;
        }
        else
        {
            return 6
        }
    }
    int main()
    {
    }