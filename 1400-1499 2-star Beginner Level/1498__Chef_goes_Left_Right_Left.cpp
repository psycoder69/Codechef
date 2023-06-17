#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t, n, r;
    cin >> t;

    while (t --)
    {
        cin >> n >> r;

        vector <int> nums(n);

        for (int& num : nums) cin >> num;

        int i = 0, mini = INT_MIN, maxi = INT_MAX;

        for (i = 0; i < n-1; i ++)
        {
            if (nums[i] < r and nums[i] > mini) mini = nums[i];
            else if (nums[i] > r and nums[i] < maxi) maxi = nums[i];
            else break;
        }

        cout << ((i == n-1) ? "YES" : "NO") << "\n";
    }

    return 0;
}