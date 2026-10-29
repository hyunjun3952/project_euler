#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int d(int n)
{
    int c = 0;
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            c++;
            if (i != n / i)
                c++;
        }
    }
    return c;
}

int main(void)
{
    for (long long n = 1;; n++)
    {
        long long t = n * (n + 1) / 2;
        if (d(t) > 500)
        {
            cout << t << endl;
            return 0;
        }
    }
}