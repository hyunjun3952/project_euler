#include <iostream>

using namespace std;

bool isp(int n)
{
    int o(n);
    int r(0);
    while (n > 0)
    {
        r = r * 10 + n % 10;
        n /= 10;
    }
    return o == r;
}

int gpv()
{
    int mv = 0;
    for (int x = 100; x <= 999; x++)
    {
        for (int y = x; y <= 999; y++)
        {
            int v = x * y;
            if (isp(v) && v > mv)
            {
                mv = v;
            }
        }
    }

    return mv;
}

int main(void)
{
    cout << gpv() << endl;
    return 0;
}