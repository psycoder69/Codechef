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
        string s;

        unordered_map <string, int> _map;

        for (int i = 0; i < (n * 3); i ++)
        {
            cin >> s >> x;

            _map[s] += x;
        }

        vector <int> nums;

        for (auto& it : _map) nums.push_back (it.second);

        sort (begin (nums), end (nums));

        for (const int& num : nums) cout << (num) << " ";

        cout << "\n";
    }

    return 0;
}