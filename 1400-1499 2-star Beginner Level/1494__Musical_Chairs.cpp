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

        n --;

        int x = 0;

        for (int i = 1; i * i <= n; i ++)
        {
            if (not (n % i))
            {
                x ++;
                x += (i != (n / i));
            }
        }

        cout << (x) << "\n";
    }

    return 0;
}