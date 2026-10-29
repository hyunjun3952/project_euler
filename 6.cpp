#include <cmath>
#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> s;
    for (int i = 1; i < 101; i++)
        s.push_back(pow(i, 2));
    int pr = accumulate(s.begin(), s.end(), 0);

    int s1 = 0;
    for (int i = 1; i < 101; i++)
        s1 += i;
    int sr = pow(s1, 2);

    int r = sr - pr;
    cout << r << endl;

    return 0;
}