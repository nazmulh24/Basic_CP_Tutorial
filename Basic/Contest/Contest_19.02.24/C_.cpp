//--> Vlad and a Sum of Sum of Digits
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        int a, b, c, d;
        a = (int)n / 9;
        b = (a * 9);
        c = n - b;
        for (int i = 1; i <= c; i++)
            sum += i;
        d = (a * 45) + sum;
        cout << d << endl;
    }
    return 0;
}
