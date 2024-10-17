#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;

        int cnt = 0;
        for (int i = l; i <= r; i++)
        {
            for (int j = i + 1; j <= r; j++)
            {
                for (int k = j + 1; k <= r; k++)
                {
                    if (gcd(i, j) == 1 && gcd(j, k) == 1 && gcd(i, k) == 1)
                        cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
