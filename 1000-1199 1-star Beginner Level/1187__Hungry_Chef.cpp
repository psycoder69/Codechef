#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t, x, y, n, r;
    cin >> t;

    while (t --)
    {
        cin >> x >> y >> n >> r;

        r -= (n * x);
        y -= x;

        if (r < 0) cout << (-1);
        else cout << (n - min(n, r / y)) << " " << min(n, r / y);

        cout << "\n";
    }

    return 0;
}