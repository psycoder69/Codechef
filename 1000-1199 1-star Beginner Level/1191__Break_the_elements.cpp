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

        vector <int> nums(n);

        int even = 0, odd = 0;

        for (int& num : nums)
        {
            cin >> num;
            ((num & 1) ? (odd = odd + 1) : (even = even + 1));
        }

        cout << ((odd > 0) ? (even) : (0)) << "\n";
    }

    return 0;
}