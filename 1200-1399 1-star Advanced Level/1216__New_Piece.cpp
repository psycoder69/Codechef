#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t, a, b, p, q;
    cin >> t;

    while (t --)
    {
        cin >> a >> b >> p >> q;

        int res = 1;

        if (a == p and b == q) res = 0;
        else if (((a + b) & 1) == ((p + q) & 1)) res = 2;

        cout << (res) << "\n";
    }

    return 0;
}