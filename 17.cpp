#include <iostream>
#include <string>
#include <vector>

using namespace std;

string o[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
string t[] = {"ten",     "eleven",  "twelve",    "thirteen", "fourteen",
              "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
string t2[] = {"",      "",      "twenty",  "thirty", "forty",
               "fifty", "sixty", "seventy", "eighty", "ninety"};

string ntw(int n)
{
    if (n == 1000)
        return "onethousand";
    string r = "";

    if (n >= 100)
    {
        r += o[n / 100] + "hundred";
        n %= 100;
        if (n > 0)
            r += "and";
    }

    if (n >= 20)
    {
        r += t2[n / 10];
        n %= 10;
    }

    if (n >= 10)
        r += t[n - 10];
    else
        r += o[n];

    return r;
}

int main(void)
{
    int s = 0;
    for (int i = 0; i <= 1000; i++)
    {
        s += ntw(i).length();
    }
    cout << s << endl;
    return 0;
}