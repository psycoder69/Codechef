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

        bool possible = 0;

        if (n >= (k << 1))
        {
            long long odd = ((n >> 1) + (n & 1) - k);

            possible = ((odd & 1) ? (0) : (1));
        }

        cout << (possible ? "YES" : "NO") << "\n";
    }

    return 0;
}