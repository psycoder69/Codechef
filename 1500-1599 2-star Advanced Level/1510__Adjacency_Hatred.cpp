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

        int even = -1, odd = -1;

        vector <int> nums(n);

        for (int& num : nums)
        {
            cin >> num;

            if (num & 1) odd = num; else even = num;
        }

        if (even < 0 or odd < 0) cout << (-1) << "\n";
        else
        {
            for (const int& num : nums) if (num & 1) cout << (num) << " ";

            for (const int& num : nums)
            {
                if (not (num & 1)) cout << (num) << " ";
            }

            cout << "\n";
        }
    }

    return 0;
}