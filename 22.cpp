#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
using ll = long long;

vector<string> split(const string &s, char d)
{
    vector<string> v;
    string t;

    for (char c : s)
    {
        if (c == d)
        {
            v.push_back(t);
            t.clear();
        }
        else
        {
            t += c;
        }
    }

    v.push_back(t);
    return v;
}

string clean(string s)
{
    s.erase(remove_if(s.begin(), s.end(), [](char c) { return c == '"' || c == ' '; }), s.end());

    return s;
}

int val(char c)
{
    if (c >= 'A' && c <= 'Z')
        return c - 'A' + 1;

    return 0;
}

ll score(const string &s)
{
    ll sum = 0;

    for (char c : s)
        sum += val(c);

    return sum;
}

int main(void)
{
    ifstream f("names.txt");

    vector<string> v;
    string s;

    while (getline(f, s))
    {
        s = clean(s);

        vector<string> t = split(s, ',');

        v.insert(v.end(), t.begin(), t.end());
    }

    f.close();

    sort(v.begin(), v.end());

    ll sum = 0;

    for (ll i = 0; i < (ll)v.size(); ++i)
        sum += (i + 1) * score(v[i]);

    cout << sum << '\n';

    return 0;
}
