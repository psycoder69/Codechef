#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t, a, b;
    cin >> t;

    while (t --)
    {
        cin >> a >> b;

        cout << ((a > 1 and b > 1 and (not (a & 1) or not (b & 1))) ? "Yes" : "No") << "\n";
    }

    return 0;
}