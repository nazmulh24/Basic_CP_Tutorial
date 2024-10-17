#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long x, y;
        long count = 0;
        cin >> n >> x >> y;
        long a[n];
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                if ((a[i] + a[j]) % x == 0 && (a[i] - a[j]) % y == 0)
                    count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
