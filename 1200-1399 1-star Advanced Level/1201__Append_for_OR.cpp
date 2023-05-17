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

    long long val;

    while (t --)
    {
        cin >> n >> val;

        long long res = 0;

        vector <long long> nums(n);

        for (long long& num : nums) cin >> num, res |= num;

        if ((res & val) == res) cout << (res ^ val); else cout << (-1);

        cout << "\n";
    }

    return 0;
}