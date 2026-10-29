#include <iostream>

using namespace std;

int main(void)
{
    int a = 1, b = 2;
    int s = 0;
    while (b <= 4000000)
    {
        if (b % 2 == 0)
            s += b;
        int n = a + b;
        a = b;
        b = n;
    }
    cout << s << endl;

    return 0;
}