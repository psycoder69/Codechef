#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t, n, a, b;
    cin >> t;

    while (t --)
    {
        cin >> n >> a >> b;

        vector <int> nums(n);

        for (int& x : nums) cin >> x;

        double count1 = count(begin(nums), end(nums), a);
        double count2 = count(begin(nums), end(nums), b);

        double probability = ((count1 / n) * (count2 / n));

        cout << fixed << setprecision(10) << probability << "\n";
    }

    return 0;
}