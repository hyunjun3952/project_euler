#include <iostream>
#include <set>

using namespace std;

int gc(int d)
{
    int r = 1 % d;
    int c = 0;
    set<int> s;

    while (r != 0)
    {
        if (s.count(r) > 0)
            return c;

        s.insert(r);
        r = (r * 10) % d;
        c++;
    }

    return 0;
}

int main(void)
{
    int mx = 0;
    int md = 0;

    for (int d = 2; d <= 1000; d++)
    {
        int c = gc(d);

        if (c > mx)
        {
            mx = c;
            md = d;
        }
    }

    cout << md << endl;

    return 0;
}