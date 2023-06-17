#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t, n;
    cin >> t;

    string s;

    while (t --)
    {
        cin >> n;
        cin >> s;

        vector <int> digit(10, 0);

        int minus = 0, plus = 0;

        for (char& c : s)
        {
            if (c >= '0' and c <= '9') digit[c - '0'] ++;
            else if (c == '-') minus ++;
            else plus ++;
        }

        s.clear();

        for (int i = 9; i >= 0; i --)
        {
            while (digit[i] --) s.push_back (i + '0');
        }

        int i = s.length() - 1;

        while (minus --) s.insert (i --, "-");
        while (plus --) s.insert (i --, "+");

        cout << (s) << "\n";
    }

    return 0;
}