// Romantic Glasses
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i + 1];
        }
        bool count = false;

        for (int j = i + 2; j <= n; j += 2)
        {
            long long sum1 = a[j] - a[i - 1];
            long long sum2 = a[j - 1] - a[i - 1];

            if ((j - i + 1) % 2 == 0 && sum1 == sum2)
            {
                found = true;
                break;
            }
            else if ((j - i + 1) % 2 == 1 && sum1 == sum2 - a[i - 1])
            {
                found = true;
                break;
            }
        }
        if (count)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
