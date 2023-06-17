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

        for (int& num : nums) cin >> num;

        int alice = 0, bob = 0, common = 0;

        for (const int& num : nums)
        {
            if (not (num % a))
            {
                if (num % b) bob ++; else common ++;
            }
            else if (not (num % b)) alice ++;
        }

        bob += (common > 0);

        cout << (bob > alice ? "BOB" : "ALICE") << "\n";
    }

    return 0;
}