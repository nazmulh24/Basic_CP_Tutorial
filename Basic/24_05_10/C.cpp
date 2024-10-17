#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a > b)
            swap(a, b);
        if (c > d)
            swap(c, d);

        // Checking if segments intersect
        if ((c > a && c < b) || (d > a && d < b) || (a > c && a < d) || (b > c && b < d))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
