#include <iostream>

using namespace std;

int main(void)
{
    int w = 1;
    int c = 0;
    int d = 0;
    for (int y = 1900; y <= 2000; y++)
    {
        for (int m = 1; m <= 12; m++)
        {
            if (y >= 1901 && w == 6)
            {
                c++;
            }
            if (m == 4 || m == 6 || m == 9 || m == 11)
            {
                d = 30;
            }
            else if (m == 2)
            {
                if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
                    d = 29;
                else
                    d = 28;
            }
            else
                d = 31;
            w = (w + d) % 7;
        }
    }
    cout << c << endl;
    return 0;
}