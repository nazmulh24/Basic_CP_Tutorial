//-->

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        ll st = n - k + 1;
        ll ed = n;

        ll odd_cnt = 0;

        if (st % 2 == 1)
            odd_cnt = (ed - st) / 2 + 1;
        else
            odd_cnt = (ed - st + 1) / 2;

        if (odd_cnt % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
