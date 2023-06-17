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

        bool flag = 1;

        unordered_map <int, int> pos, freq;

        for (int i = 0; i < n; i ++)
        {
            if (pos[nums[i]] and (i > pos[nums[i]]))
            {
                flag = 0;
                break;
            }

            pos[nums[i]] = (i + 1);
            ++ freq[nums[i]];
        }

        if (flag)
        {
            unordered_map <int, int> temp;

            for (auto& it : freq) ++ temp[it.second];

            for (auto& it : temp)
            {
                if (it.second > 1)
                {
                    flag = 0;
                    break;
                }
            }
        }

        cout << (flag ? "YES" : "NO") << "\n";
    }

    return 0;
}