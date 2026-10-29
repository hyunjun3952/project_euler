#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    const double p = (1.0 + sqrt(5.0)) / 2.0; // golden ratio

    for (int n = 1;; n++)
    {
        double d = floor(n * log10(p) - log10(sqrt(5.0))) + 1;
        if (d >= 1000)
        {
            cout << n;
            break;
        }
    }

    return 0;
}
