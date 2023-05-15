#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t, n, k;
    cin >> t;

    while (t --)
    {
        cin >> n >> k;

        int res = -1;

        if (not k) res = ((n % 4) ? (1) : (0));
        else if (k and not (n % 4)) res = 1;

        cout << (res > 0 ? "On" : (res < 0 ? "Ambiguous" : "Off")) << "\n";
    }

    return 0;
}