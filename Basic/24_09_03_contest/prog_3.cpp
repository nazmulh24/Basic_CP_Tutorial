//--> The Legend of Freya the Frog

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        long long x, y, k;
        cin >> x >> y >> k;

        long long t_m = (x + y) / k;
        if ((x + y) % k != 0)
            t_m++;
        cout << t_m << endl;
    }

    return 0;
}
