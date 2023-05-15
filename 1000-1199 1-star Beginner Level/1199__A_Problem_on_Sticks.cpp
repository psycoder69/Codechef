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

        sort (begin(nums), end(nums));

        int diff = (nums[0] > 0);

        for (int i = 1; i < n; i ++) diff += (nums[i] != nums[i-1]);

        cout << (diff) << "\n";
    }

    return 0;
}