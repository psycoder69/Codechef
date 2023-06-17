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

        int dish;
        unordered_map <int, pair <int, int>> _map;

        for (int i = 0; i < n; i ++)
        {
            cin >> dish;

            if (not _map[dish].first or (i > _map[dish].first))
            {
                _map[dish].first = (i + 1);
                _map[dish].second ++;
            }
        }

        int res = 10001, maxx = 0;

        for (auto& it : _map)
        {
            if (it.second.second >= maxx)
            {
                if (it.second.second == maxx) res = min (res, it.first);
                else res = it.first;

                maxx = it.second.second;
            }
        }

        cout << (res) << "\n";
    }

    return 0;
}