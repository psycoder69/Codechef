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

        int num, maxx = 0;
        unordered_map <int, int> _map;

        for (int i = 0; i < n; i ++)
        {
            cin >> num;

            _map[num] ++;
            maxx = max (maxx, num);
        }

        int single = 0;

        for (auto& it : _map) single += (it.second == 1);

        if (single == 1 and _map[maxx] == 1)
        {
            int per = 0;

            for (auto& it : _map)
            {
                if (it.first < maxx) per = max (per, it.second);
            }

            cout << (per > 2 ? (1) : (per));
        }
        else cout << ((single >> 1) + (single & 1));

        cout << "\n";
    }

    return 0;
}