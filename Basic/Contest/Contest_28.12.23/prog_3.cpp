// Can I Square
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
        long long int a[n], sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        long long int squre = sqrt(sum);
        if (pow(squre, 2) == sum)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
