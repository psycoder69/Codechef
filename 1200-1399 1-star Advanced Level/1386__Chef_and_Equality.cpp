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
        }

        for (auto& it : _map) maxx = max (maxx, it.second);

        cout << (n - maxx) << "\n";
    }

    return 0;
}