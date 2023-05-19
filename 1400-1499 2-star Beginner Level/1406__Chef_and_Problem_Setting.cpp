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

        string x, y;

        int result = 1;

        for (int i = 0; i < n; i ++)
        {
            cin >> x >> y;

            if (x == "correct")
            {
                if (count (begin (y), end (y), '0')) result = -1;
            }
            else
            {
                if (result > 0 and not count (begin (y), end (y), '0'))
                {
                    result = 0;
                }
            }
        }

        cout << ((result > 0) ? "FINE" : ((result < 0) ? "INVALID" : "WEAK")) << "\n";
    }

    return 0;
}