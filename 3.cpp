#include <iostream>

using namespace std;
using ll = long long;

void f(ll n)
{
    for (ll i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            cout << i << '\n';
            n /= i;
        }
    }
    if (n > 1)
        cout << n;
}

int main(void)
{
    ll n = 600851475143LL;
    f(n);
    return 0;
}