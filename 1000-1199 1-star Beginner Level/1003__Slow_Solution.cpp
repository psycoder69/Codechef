#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t, x, y, z;
    cin >> t;

    while (t --)
    {
        cin >> x >> y >> z;

        int iter = min (x, z / y), rem = 0;

        if (x > (z / y)) rem = (z - (y * iter));

        int ans = (iter * y * y) + (rem * rem);

        cout << (ans) << "\n";
    }

    return 0;
}