#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n = 0;
    cin >> n;

    vector<int> v;
    for (int i = 1; i < n; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
            v.push_back(i);
    }
    cout << accumulate(v.begin(), v.end(), 0) << endl;

    return 0;
}