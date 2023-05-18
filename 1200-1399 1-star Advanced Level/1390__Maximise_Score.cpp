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

        vector <int> nums(n), score(n);

        for (int& num : nums) cin >> num;

        score[0] = abs (nums[1] - nums[0]);
        score[n-1] = abs (nums[n-1] - nums[n-2]);

        for (int i = 1; i < n-1; i ++)
        {
            score[i] = max(abs (nums[i] - nums[i-1]), abs (nums[i+1] - nums[i]));
        }

        cout << *min_element(begin (score), end (score)) << "\n";
    }

    return 0;
}