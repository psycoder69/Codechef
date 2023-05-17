#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t, n, k, v;
    cin >> t;

    while (t --)
    {
        cin >> n >> k >> v;

        int num, sum = 0, total = ((n + k) * v);

        while (n --)
        {
            cin >> num;
            sum += num;
        }

        int diff = (total - sum);

        if ((diff <= 0) or (diff % k)) cout << (-1); else cout << (diff / k);

        cout << "\n";
    }

    return 0;
}