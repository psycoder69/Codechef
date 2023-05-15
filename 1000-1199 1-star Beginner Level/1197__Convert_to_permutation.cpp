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

        vector <int> perm(n);

        for (int& num : perm) cin >> num;

        sort (begin(perm), end(perm));

        int changes = 0;

        for (int i = 1; i <= n; i ++)
        {
            if (perm[i-1] > i)
            {
                changes = -1;
                break;
            }

            changes += (i - perm[i-1]);
        }

        cout << (changes) << "\n";
    }

    return 0;
}