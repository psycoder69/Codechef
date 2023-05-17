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

        int maxx = 1;

        for (int i = 1; i < n-1; i ++) maxx += (s[i] < s[i-1]);

        cout << (maxx) << "\n";
    }

    return 0;
}