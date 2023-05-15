#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t, a, b, a1, b1, a2, b2;
    cin >> t;

    while (t --)
    {
        cin >> a >> b >> a1 >> b1 >> a2 >> b2;

        if (a > b) swap(a, b);
        if (a1 > b1) swap(a1, b1);
        if (a2 > b2) swap(a2, b2);

        if (a == a1 and b == b1) cout << (1);
        else if (a == a2 and b == b2) cout << (2);
        else cout << (0);

        cout << "\n";
    }

    return 0;
}