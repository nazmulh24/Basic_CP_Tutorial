#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int coins[] = {15, 10, 6, 3, 1};

        int dp[n + 1];
        dp[0] = 0;

        for (int i = 1; i <= n; ++i)
            dp[i] = INF;

        for (int coin : coins)
        {
            for (int j = coin; j <= n; ++j)
                dp[j] = min(dp[j], dp[j - coin] + 1);
        }
        cout << dp[n] << endl;
    }
    return 0;
}
//nazmul code parena