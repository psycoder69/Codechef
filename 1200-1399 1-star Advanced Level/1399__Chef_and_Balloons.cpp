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

    long long r, g, b, k;

    while (t --)
    {
        cin >> r >> g >> b;
        cin >> k;

        cout << (1 + min (r, k-1) + min (g, k-1) + min (b, k-1)) << "\n";
    }

    return 0;
}