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

    while (t --)
    {
        cin >> n;

        string s;
        vector <int> freq(26, 0);

        while (n --)
        {
            cin >> s;

            for (char& c : s) freq[c - 'a'] ++;
        }

        freq[2] >>= 1;
        freq[4] >>= 1;

        cout << min ({freq[2], freq[3], freq[4], freq[5], freq[7], freq[14]}) << "\n";
    }

    return 0;
}