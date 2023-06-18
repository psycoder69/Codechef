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

        if (n & 1)
        {
            cout << "YES\n";

            vector <vector <int>> matrix(n, vector <int> (n, 0));

            int start = 0, won = (n >> 1);

            for (int i = 0; i < n; i ++)
            {
                start ++;

                for (int j = (start % n), loop = won; loop > 0; j ++, loop --)
                {
                    matrix[i][(j % n)] = 1;
                }
            }

            for (int i = 0; i < n; i ++)
            {
                for (int j = 0; j < n; j ++) cout << (matrix[i][j]);

                cout << "\n";
            }
        }
        else cout << "NO\n";
    }

    return 0;
}