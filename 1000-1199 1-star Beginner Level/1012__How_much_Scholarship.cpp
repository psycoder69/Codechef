#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e5 + 5;
const int MOD = 1e9 + 7;

int main()
{
    ios_base :: sync_with_stdio (false);
    cin.tie (NULL);
    cout.tie (NULL);

    int rank;
    cin >> rank;

    cout << (rank < 51 ? (100) : (rank < 101 ? (50) : (0)));

    return 0;
}