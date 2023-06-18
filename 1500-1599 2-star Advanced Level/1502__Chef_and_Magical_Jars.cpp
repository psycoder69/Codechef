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

        long long num = 0, sum = 0;

        while (n --)
        {
            cin >> num;

            sum += (num - 1);
        }

        cout << (1 + sum) << "\n";
    }

    return 0;
}