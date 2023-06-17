#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t, n, k;
    cin >> t;

    while (t --)
    {
        cin >> n >> k;

        vector <int> nums(n+1);

        for (int i = 0; i <= n; i ++) nums[i] = (-i);

        for (int i = 1; i <= n and k > 0; i += 2, k --) nums[i] *= (-1);

        for (int i = (n - (n & 1)); i >= 0 and k > 0; i -= 2, k --)
        {
            nums[i] *= (-1);
        }

        for (int i = 1; i <= n; i ++) cout << (nums[i]) << " ";

        cout << "\n";
    }

    return 0;
}