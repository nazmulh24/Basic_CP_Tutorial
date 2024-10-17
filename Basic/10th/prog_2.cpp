//--> Panoramix's Prediction
#include <bits/stdc++.h>
using namespace std;

bool prime(int p)
{
    for (int i = 2; i < p; i++)
    {
        if (p % i == 0)
        {
            return 0;
            break;
        }
    }
    return 1;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int p = n + 1;
    int l = 1;
    while (l == 1)
    {
        int A = prime(p);
        if (A == 1)
            l = 0;
        else
            p++;
    }
    if (m == p)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
