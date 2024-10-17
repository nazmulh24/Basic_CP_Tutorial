#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int test = 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            for (int k = j + 1; k < n; k++)
            {
                int val = a[i] + a[j] + a[k];
                if (val == 0)
                {
                    test = 1;
                    break;
                }
            }
    if (test == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
