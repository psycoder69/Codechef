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

        int diff = abs (x - y), winner = 0;

        if (not diff) winner = not (x & 1);
        else if (diff == 1) winner = ((x + y) % 4 == 1);
        else winner = (y > x);

        cout << (not winner ? "CHEF\n" : "CHEFINA\n");
    }

    return 0;
}