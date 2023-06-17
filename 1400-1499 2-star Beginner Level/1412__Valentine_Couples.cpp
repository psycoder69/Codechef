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

        vector <int> boy(n), girl(n);

        for (int& height : boy) cin >> height;
        for (int& height : girl) cin >> height;

        sort (begin (boy), end (boy));
        sort (rbegin (girl), rend (girl));

        int maxx = 0;

        for (int i = 0; i < n; i ++) maxx = max (boy[i] + girl[i], maxx);

        cout << (maxx) << "\n";
    }

    return 0;
}