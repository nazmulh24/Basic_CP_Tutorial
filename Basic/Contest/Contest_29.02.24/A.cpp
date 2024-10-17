//--> Shuffle Party

#include <bits/stdc++.h>
using namespace std;

long divisor(long k)
{
    for (long d = k - 1; d > 1; d--)
        if (k % d == 0)
            return d;
    return 1;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // long n;
        // cin >> n;
        // int div = log2(n);
        // int ans = pow(2, div);
        // cout << ans<<endl;

        long n, i, k, d;
        cin >> n;
        long a[n];
        for (i = 0; i < n; i++)
            a[i] = i + 1;

        for (i = 0; i < n; i++)
        {
            k = i + 1;
            if (k >= 2)
            {
                d = divisor(k);
                swap(a[d - 1], a[k - 1]);
            }
        }
        for (i = 0; i < n; i++)
            if (a[i] == 1)
                cout << (i + 1) << endl;
    }
    return 0;
}
