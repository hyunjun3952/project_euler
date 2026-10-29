#include <cmath>
#include <iostream>

using namespace std;

int main(void)
{
    int r(0);
    for (int a = 1; a <= 1000; a++)
    {
        for (int b = a + 1; b <= 1000; b++)
        {
            int c = 1000 - a - b;
            if (pow(a, 2) + pow(b, 2) == pow(c, 2))
                r = a * b * c;
        }
    }
    cout << r << endl;
}