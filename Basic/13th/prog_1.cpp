//--> Soft Drinking.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int t_drinks = l * k;
    t_drinks = t_drinks / nl;
    int t_slics = c * d;
    int t_salt = p / np;
    int num = min(min(t_drinks, t_slics), t_salt);
    int numr = num / n;
    cout << numr << endl;
    return 0;
}
