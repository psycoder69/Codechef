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

        int vote, size = 0;

        vector <int> votes(n+1, 0);

        for (int i = 1; i <= n; i ++)
        {
            cin >> vote;

            if (i == vote) votes[vote] = -1000; else votes[vote] ++;
        }

        for (int& v : votes) size += (v >= k);

        cout << (size) << "\n";
    }

    return 0;
}