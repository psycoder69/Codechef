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

        int i, sum = 0;

        for (i = 0; sum < 28; i ++) sum += ((nums[i] < 8) * nums[i]);

        cout << (i) << "\n";
    }

    return 0;
}