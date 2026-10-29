#include <iostream>
#include <numeric>

using namespace std;

long long lr(int x, int y)
{
    long long r(1);
    for (int n = x; n <= y; n++)
    {
        r = r / gcd(r, static_cast<long long>(n)) * n;
    }

    return r;
}

int main(void)
{
    cout << lr(1, 20) << endl;
    return 0;
}