#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int Aa[n][m], Ab[m], mul[n];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> Aa[i][j];
        }
    }
    for (int i = 0; i < m; ++i)
        cin >> Ab[i];
    for (int i = 0; i < n; ++i)
    {
        mul[i] = 0;
        for (int j = 0; j < m; ++j)
        {
            mul[i] += Aa[i][j] * Ab[j];
        }
    }
    for (int i = 0; i < n; ++i)
        cout << mul[i] << endl;
    return 0;
}
