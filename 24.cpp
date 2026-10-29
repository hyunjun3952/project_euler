#include <iostream>
#include <vector>

using namespace std;
using ll = long long;

ll fc(int n)
{
    ll r = 1;
    for (int i = 2; i <= n; i++)
    {
        r *= i;
    }
    return r;
}

int main(void)
{
    vector<int> dg = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    ll n = 1000000;
    n--;

    for (int i = 9; i >= 0; i--)
    {
        ll f = fc(i);
        int idx = n / f;
        n %= f;

        cout << dg[idx];
        dg.erase(dg.begin() + idx);
    }

    cout << "\n";
    return 0;
}
