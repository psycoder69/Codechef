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

        int low = 1, high = n;

        for (int i = 0; i < (n >> 1); i ++)
        {
            cout << (high --) << " " << (low ++) << " ";
        }

        if (n & 1) cout << (low);

        cout << "\n";
    }

    return 0;
}