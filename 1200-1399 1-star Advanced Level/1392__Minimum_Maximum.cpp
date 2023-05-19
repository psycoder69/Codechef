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

        for (int& num : nums) cin >> num;

        cout << (*min_element(begin(nums), end(nums)) * 1LL * (n - 1)) << "\n";
    }

    return 0;
}