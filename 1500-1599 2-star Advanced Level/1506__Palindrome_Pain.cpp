#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

string get_palindromic_string (int& x, int& y, char c1, char c2)
{
    string s;

    for (int i = 0; i < (x >> 1); i ++) s.push_back (c1);
    for (int i = 0; i < (y >> 1); i ++) s.push_back (c2);

    if (x & 1) s.push_back (c1); else if (y & 1) s.push_back (c2);

    for (int i = 0; i < (y >> 1); i ++) s.push_back (c2);
    for (int i = 0; i < (x >> 1); i ++) s.push_back (c1);

    return s;
}

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t, x, y;
    cin >> t;

    while (t --)
    {
        cin >> x >> y;

        if (x == 1 or y == 1 or ((x & 1) and (y & 1))) cout << (-1) << "\n";
        else
        {
            cout << get_palindromic_string (x, y, 'a', 'b') << "\n";
            cout << get_palindromic_string (y, x, 'b', 'a') << "\n";
        }
    }

    return 0;
}