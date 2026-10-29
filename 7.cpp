#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    const int n(110000);
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int p = 2; p * p <= n; p++)
    {
        if (is_prime[p])
        {
            for (int i = p * p; i <= n; i += p)
                is_prime[i] = false;
        }
    }

    int c = 0;
    for (int p = 2; p <= n; p++)
    {
        if (is_prime[p])
        {
            c++;
            if (c == 10001)
            {
                cout << p << endl;
                break;
            }
        }
    }

    return 0;
}