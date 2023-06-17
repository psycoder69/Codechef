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

        int size = (n << 1);

        vector <int> nums(size);

        for (int& num : nums) cin >> num;

        long long swaps = 0;

        for (int i = size-1, j = size-1; i >= 0; i --)
        {
            if (nums[i] > n) swaps += (j - i), j --;
        }

        cout << (swaps) << "\n";
    }

    return 0;
}