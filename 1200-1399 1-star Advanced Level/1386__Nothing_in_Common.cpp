#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t, n, m;
    cin >> t;

    while (t --)
    {
        cin >> n >> m;

        vector <int> nums(n);

        for (int& num : nums) cin >> num;

        sort (begin (nums), end (nums));

        int num, counter = 0;

        while (m --)
        {
            cin >> num;

            counter += (binary_search (begin (nums), end (nums), num));
        }

        cout << (counter) << "\n";
    }

    return 0;
}