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

        cout << (1) << " " << (1) << " ";

        long long x = 2;

        while (n -- > 1) cout << (x) << " ", x <<= 1;

        cout << "\n";
    }

    return 0;
}