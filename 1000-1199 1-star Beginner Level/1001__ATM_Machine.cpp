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

        vector <int> nums(n);

        for (int& x : nums) cin >> x;

        for (int& x : nums) if (k >= x) k -= x, x = 1; else x = 0;

        for (const int& x : nums) cout << (x);

        cout << "\n";
    }

    return 0;
}