#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> dgs = {1};

    for (int i = 0; i < 1000; i++)
    {
        int c(0);
        for (int j = 0; j < dgs.size(); j++)
        {
            int v(dgs[j] * 2 + c);
            dgs[j] = v % 10;
            c = v / 10;
        }
        while (c > 0)
        {
            dgs.push_back(c % 10);
            c /= 10;
        }
    }

    int s(0);
    for (int dg : dgs)
    {
        s += dg;
    }

    cout << s << endl;

    return 0;
}