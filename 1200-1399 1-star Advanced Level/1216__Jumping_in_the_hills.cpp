#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t, n, u, d;
    cin >> t;

    while (t --)
    {
        cin >> n >> u >> d;

        vector <int> v(n);

        for (int& num : v) cin >> num;

        int i = 1, diff = 0, para = 1;

        for (i = 1; i < n; i ++)
        {
            diff = abs (v[i] - v[i-1]);

            if (v[i] > v[i-1] and diff > u)
            {
                break;
            }
            else if (v[i] < v[i-1] and diff > d)
            {
                if (para) para = 0; else break;
            }
        }

        cout << (i) << "\n";
    }

    return 0;
}