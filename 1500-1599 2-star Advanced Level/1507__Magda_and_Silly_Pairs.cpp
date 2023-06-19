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

        vector <int> arr(n), brr(n);

        int j = 0, k = (n - 1), num = 0;

        for (int i = 0; i < n; i ++)
        {
            cin >> num;

            if (num & 1) arr[j ++] = num; else arr[k --] = num;
        }

        j = 0, k = (n - 1);

        for (int i = 0; i < n; i ++)
        {
            cin >> num;

            if (num & 1) brr[j ++] = num; else brr[k --] = num;
        }

        long long sum = 0;

        for (int i = 0; i < n; i ++) sum += ((arr[i] * 1LL + brr[i]) >> 1);

        cout << (sum) << "\n";
    }

    return 0;
}