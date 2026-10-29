#include <iostream>

using namespace std;
using ll = long long;

bool is_ami(ll n)
{
    auto ds = [](ll n)
    {
        ll s = 0;
        for (ll i = 1; i * i <= n; ++i)
            if (n % i == 0)
            {
                s += i;
                if (i != 1 && i != n / i)
                    s += n / i;
            }
        return s;
    };

    ll s = ds(n);
    return n != s && ds(s) == n;
}

int main(void)
{
    ll s = 0;

    for (ll n = 1; n <= 10000; ++n)
    {
        if (is_ami(n))
            s += n;
    }

    cout << s << '\n';

    return 0;
}
