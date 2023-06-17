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

        vector <int> nums(n), prefix(n, 1);

        for (int& num : nums) cin >> num;

        for (int i = n-2; i >= 0; i --)
        {
            if (nums[i] * nums[i+1] < 0) prefix[i] = (1 + prefix[i+1]);
        }

        for (const int& pre : prefix) cout << (pre) << " ";

        cout << "\n";
    }

    return 0;
}