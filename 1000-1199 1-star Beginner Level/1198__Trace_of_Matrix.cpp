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

        vector <vector <int>> matrix(n, vector <int> (n, 0));

        for (int i = 0; i < n; i ++)
        {
            for (int j = 0; j < n; j ++)
            {
                cin >> matrix[i][j];
            }
        }

        int maxi = 0;

        for (int i = 0; i < n; i ++)
        {
            for (int j = 0; j < n; j ++)
            {
                if (i > 0 and j > 0) matrix[i][j] += matrix[i-1][j-1];

                maxi = max(maxi, matrix[i][j]);
            }
        }

        cout << (maxi) << "\n";
    }

    return 0;
}