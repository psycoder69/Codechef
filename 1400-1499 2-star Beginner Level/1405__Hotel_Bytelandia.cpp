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

        int x;
        vector <int> time(1005, 0);

        for (int i = 0; i < n; i ++) cin >> x, time[x] ++;

        for (int i = 0; i < n; i ++) cin >> x, time[x] --;

        int maxx = time[1];

        for (int i = 1; i < 1005; i ++)
        {
            time[i] += time[i-1];
            maxx = max (maxx, time[i]);
        }

        cout << (maxx) << "\n";
    }

    return 0;
}