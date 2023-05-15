#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t, x, y, k;
    cin >> t;

    while (t --)
    {
        cin >> x >> y >> k;

        cout << ((not (x % k) and not (y % k)) ? "YES" : "NO") << "\n";
    }

    return 0;
}