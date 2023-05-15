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

        vector <int> v(n), w(n);

        for (int& x : v) cin >> x;
        for (int& x : w) cin >> x;

        int _count = (v[0] >= w[0]);

        for (int i = 1; i < n; i ++) _count += ((v[i] - v[i-1]) >= w[i]);

        cout << (_count) << "\n";
    }

    return 0;
}