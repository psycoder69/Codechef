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

        vector <int> att(n), def(n);

        for (int& power : att) cin >> power;
        for (int& power : def) cin >> power;

        int maxx = -1;

        for (int i = 1; i < n-1; i ++)
        {
            if (def[i] > (att[i-1] + att[i+1])) maxx = max (maxx, def[i]);
        }

        if (def[0] > (att[n-1] + att[1])) maxx = max (maxx, def[0]);
        if (def[n-1] > (att[n-2] + att[0])) maxx = max (maxx, def[n-1]);

        cout << (maxx) << "\n";
    }

    return 0;
}