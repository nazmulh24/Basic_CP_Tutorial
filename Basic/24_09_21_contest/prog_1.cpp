//--> Nazmul

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        int r = 0;
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (v[i] >= k)
            {
                r += v[i];
            }
            else if (v[i] == 0 && r > 0)
            {
                r--;
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
