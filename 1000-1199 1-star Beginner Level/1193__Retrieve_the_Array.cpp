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

        vector <long long> nums(n);

        long long sum = 0;

        for (long long& num : nums) cin >> num, sum += num;

        sum /= (n + 1);

        for (const long long& num : nums) cout << (num - sum) << " ";

        cout << "\n";
    }

    return 0;
}