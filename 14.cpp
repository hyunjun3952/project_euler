#include <iostream>
#include <vector>

using namespace std;

vector<int> dp(1000001, 0);

int collatz(long long n)
{
    if (n == 1)
        return 0;
    if (n <= 1000000 && dp[n] != 0)
        return dp[n];
    int c = 1 + collatz(n % 2 == 0 ? n / 2 : 3 * n + 1);
    if (n <= 1000000)
        dp[n] = c;
    return c;
}

int main(void)
{
    dp[1] = 0;

    int mn = 1;
    int mc = 0;

    for (int n = 2; n <= 1000000; n++)
    {
        int c = collatz(n);
        if (c > mc)
        {
            mc = c;
            mn = n;
        }
    }

    cout << mn << endl;
    cout << mc << endl;
}