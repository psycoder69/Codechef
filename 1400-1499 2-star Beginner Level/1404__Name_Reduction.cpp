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

    string x, y;

    while (t --)
    {
        cin >> x >> y;
        cin >> n;

        vector <int> letter(26, 0);

        for (char& c : x) letter[c - 'a'] ++;
        for (char& c : y) letter[c - 'a'] ++;

        string s;
        bool b = 1;

        while (n --)
        {
            cin >> s;

            for (char& c : s) if (-- letter[c - 'a'] < 0) b = 0;
        }

        cout << (b ? "YES" : "NO") << "\n";
    }

    return 0;
}