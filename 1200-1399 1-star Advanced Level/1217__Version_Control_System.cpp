#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t, n, m, k;
    cin >> t;

    while (t --)
    {
        cin >> n >> m >> k;

        vector <int> file(n);

        int x;

        while (m --) cin >> x, file[-- x] ++;
        while (k --) cin >> x, file[-- x] ++;

        int both = 0, none = 0;

        for (int i = 0; i < n; i ++)
        {
            both += (file[i] > 1);
            none += (file[i] < 1);
        }

        cout << (both) << " " << (none) << "\n";
    }

    return 0;
}