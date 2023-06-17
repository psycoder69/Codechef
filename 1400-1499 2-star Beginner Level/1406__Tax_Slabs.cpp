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

        vector <vector <int>> tax = {{250000, 500000, 5}, {500000, 750000, 10}, {750000, 1000000, 15}, {1000000, 1250000, 20}, {1250000, 1500000, 25}, {1500000, 1000000000, 30}};

        int x = 0;

        for (auto& v : tax)
        {
            if (n > v[0]) x += (((min (n, v[1]) - v[0]) * v[2]) / 100);
        }

        cout << (n - x) << "\n";
    }

    return 0;
}