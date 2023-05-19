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

    while (t --)
    {
        int num;
        vector <int> nums;

        while (true)
        {
            cin >> num;

            nums.push_back (num);

            if (cin.get() == '\n') break;
        }

        int maxx = 0, size = nums.size() - 1;

        for (const int& num : nums)
        {
            if (num != size) maxx = max (maxx, num); else size = -1;
        }

        cout << (maxx) << "\n";
    }

    return 0;
}