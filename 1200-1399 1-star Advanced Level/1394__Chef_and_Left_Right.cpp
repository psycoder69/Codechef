#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t;
    cin >> t;

    string s;

    while (t --)
    {
        cin >> s;

        int node = 1;

        for (int i = 0; i < s.length(); i ++)
        {
            if (i & 1) node = (node << 1) + (s[i] == 'l' ? (-1) : (1));
            else node = ((node + (s[i] == 'r')) << 1);

            node %= MOD;
        }

        cout << (node) << "\n";
    }

    return 0;
}