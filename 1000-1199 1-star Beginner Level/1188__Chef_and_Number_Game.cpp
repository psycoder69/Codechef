#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t, n;
    cin >> t;

    while (t --)
    {
        cin >> n;

        int num, neg = 0, pos = 0;

        while (n --)
        {
            cin >> num;
            ((num > 0) ? (pos = pos + 1) : (neg = neg + 1));
        }

        if (not neg) cout << (pos) << " " << (pos);
        else if (not pos) cout << (neg) << " " << (neg);
        else cout << max(neg, pos) << " " << min(neg, pos);

        cout << "\n";
    }

    return 0;
}