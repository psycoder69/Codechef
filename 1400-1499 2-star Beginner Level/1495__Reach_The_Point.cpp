#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t, x, y;
    cin >> t;

    while (t --)
    {
        cin >> x >> y;

        x = abs (x);
        y = abs (y);

        int dis = 0;

        if (x > y)
        {
            dis = (x << 1) + ((y & 1) ? (not (x & 1)) : (x & 1));
        }
        else if (x < y)
        {
            dis = (y << 1) - ((x & 1) ? (not (y & 1)) : (y & 1));
        }
        else
        {
            dis = (x << 1);
        }

        cout << (dis) << "\n";
    }

    return 0;
}