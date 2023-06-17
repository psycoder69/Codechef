#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int t;
    cin >> t;

    int arr[3];

    while (t --)
    {
        cin >> arr[0] >> arr[1] >> arr[2];

        int colors = 0;

        if (arr[0] > 0) colors ++, arr[0] --;
        if (arr[1] > 0) colors ++, arr[1] --;
        if (arr[2] > 0) colors ++, arr[2] --;

        sort (arr, arr + 3, greater <int> ());

        if (arr[0] and arr[1]) colors ++, arr[0] --, arr[1] --;
        if (arr[0] and arr[2]) colors ++, arr[0] --, arr[2] --;
        if (arr[1] and arr[2]) colors ++, arr[1] --, arr[2] --;

        cout << (colors) << "\n";
    }

    return 0;
}