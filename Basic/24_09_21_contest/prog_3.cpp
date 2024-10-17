//--> Nazmul

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<ll> v(n);

        double avg = 0;
        ll sum = 0;
        ll mx = 0;

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
            mx = max(mx, v[i]);
        }

        if (n == 1)
        {
            cout << "-1" << endl;
            continue;
        }

        ll r_sum = (sum + mx) * 2;
        long long min_x = max(0LL, r_sum - sum);

        cout << min_x << endl;
    }

    return 0;
}
