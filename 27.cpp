#include <iostream>

using namespace std;

bool isp(int x)
{
    if (x < 2)
        return false;

    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
            return false;
    }

    return true;
}

int main(void)
{
    int mx = 0;
    int ma = 0;
    int mb = 0;

    for (int b = 2; b < 1000; b++)
    {
        if (!isp(b))
            continue;

        for (int a = -999; a < 1000; a += (b == 2 ? 1 : 2))
        {
            if (!isp(a + b + 1))
                continue;

            int n = 2;

            while (n <= mx && isp(n * n + a * n + b))
                n++;

            if (n > mx)
            {
                while (isp(n * n + a * n + b))
                    n++;

                mx = n;
                ma = a;
                mb = b;
            }
        }
    }

    cout << ma * mb << endl;

    return 0;
}
