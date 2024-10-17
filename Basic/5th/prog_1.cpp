#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t; // (1≤𝑡≤100)
    while (t--)
    {
        int n;
        cin >> n; // (1≤𝑛≤50)
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i] >> b[i]; // (1≤𝑎𝑖,𝑏𝑖≤50)
        }
        int x = b[1];
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 10)
            {
                if (b[i] > b[0])
                    x = b[i];
            }
        }
        cout << x << endl;
    }
    return 0;
}
