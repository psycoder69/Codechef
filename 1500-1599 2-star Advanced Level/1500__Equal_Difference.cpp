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

        int num, deletions = 0, maxx = 0;

        unordered_map <int, int> freq;

        for (int i = 0; i < n; i ++) cin >> num, ++ freq[num];

        for (auto& it : freq) maxx = max (maxx, it.second);

        deletions = (n - maxx);

        cout << max (0, min (deletions, n - 2)) << "\n";
    }

    return 0;
}