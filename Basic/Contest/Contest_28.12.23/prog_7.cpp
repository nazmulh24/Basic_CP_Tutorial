// Can I Square
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a1[m][3], a2[n];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a1[i][j];
            }
        }
        for (int k = 0; k < 5; k++)
        {
            cin >> a2[k];
        }

        cout << "YES" << endl;

        cout << "NO" << endl
    }
    return 0;
}
