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

    long long n, k;

    while (t --)
    {
        cin >> n >> k;

        k -= ((n * (n + 1)) >> 1);

        if (k < 0) cout << (-1);
        else
        {
            for (int i = 1; i < n; i ++) cout << (1) << " ";

            cout << (k + 1) << " ";
        }

        cout << "\n";
    }

    return 0;
}