#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;
using ll = long long;

vector<ll> div(ll n)
{
    vector<ll> v;

    for (ll i = 1; i * i <= n; ++i)
        if (n % i == 0)
        {
            if (i != n)
                v.push_back(i);

            if (i != n / i && n / i != n)
                v.push_back(n / i);
        }

    sort(v.begin(), v.end());
    return v;
}

bool abu(ll n)
{
    vector<ll> divs = div(n);
    return accumulate(divs.begin(), divs.end(), 0LL) > n;
}

int main(void)
{
    vector<ll> abus;

    for (ll n = 1; n <= 28123; ++n)
    {
        if (!abu(n))
            continue;

        abus.push_back(n);
    }

    vector<bool> c(28124, false);

    for (ll i = 0; i < abus.size(); ++i)
        for (ll j = i; j < abus.size(); ++j)
        {
            ll s = abus[i] + abus[j];
            if (s > 28123)
                break;

            c[s] = true;
        }

    ll s = 0;

    for (ll n = 1; n <= 28123; ++n)
    {
        if (!c[n])
            s += n;
    }

    cout << s << '\n';

    return 0;
}
