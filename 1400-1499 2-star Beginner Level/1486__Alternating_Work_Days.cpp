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

    int a, b, x, y;

    while (t --)
    {
        cin >> a >> b >> x >> y;

        bool possible = 0;

        if (not (x % a) and not (y % b))
        {
            int p = (x / a), q = (y / b);

            possible = (abs (p - q) < 2);
        }

        cout << (possible ? "YES" : "NO") << "\n";
    }

    return 0;
}