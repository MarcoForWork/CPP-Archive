for (int a = x; a <= y; a++)
    {
        for (int b = a; b <= y; b++)
        {
            if (Prime(reverse(SumSingleNum(GCD(a, b)))))
                count++;
        }
    }
    cout << count;