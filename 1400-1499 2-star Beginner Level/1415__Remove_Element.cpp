#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t;
    cin >> t;

    int n, k;

    while (t --)
    {
        cin >> n >> k;

        vector <int> nums(n);

        for (int& num : nums) cin >> num;

        bool possible = 1;

        if (n > 1)
        {
            int mini = *min_element (begin (nums), end (nums));

            for (int i = 0; i < n; i ++)
            {
                if (mini + nums[i] > k)
                {
                    possible = 0;
                    break;
                }
            }
        }

        cout << (possible ? "YES" : "NO") << "\n";
    }

    return 0;
}