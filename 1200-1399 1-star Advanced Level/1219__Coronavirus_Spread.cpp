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

        vector <int> v(n);

        for (int& num : v) cin >> num;

        int curr = 1, mini = n, maxi = 1;

        for (int i = 1; i < n; i ++)
        {
            if (v[i] - v[i-1] > 2)
            {
                mini = min (curr, mini);
                maxi = max (curr, maxi);

                curr = 0;
            }

            ++ curr;
        }

        cout << min (curr, mini) << " " << max (curr, maxi) << "\n";
    }

    return 0;
}