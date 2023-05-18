#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t, c, d, l;
    cin >> t;

    while (t --)
    {
        cin >> c >> d >> l;

        bool possible = 0;

        if (not (l % 4))
        {
            l /= 4;
            l -= d;

            possible = (l >= 0) and (l <= c) and (l >= (c - 2 * d));
        }

        cout << (possible ? "yes" : "no") << "\n";
    }

    return 0;
}