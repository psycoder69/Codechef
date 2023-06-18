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

        if (n == 1) cout << (1);
        else
        {
            if (k == 1) cout << (-1);
            else
            {
                for (int x = 1; x < k; x ++) cout << (x) << " ";
                for (int x = n; x >= k; x --) cout << (x) << " ";
            }
        }

        cout << "\n";
    }

    return 0;
}