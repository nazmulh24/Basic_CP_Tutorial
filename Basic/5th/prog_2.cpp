#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t; // (1≤𝑡≤1000)
    while (t--)
    {
        int b, c, h, layer, layer2;
        cin >> b >> c >> h;
        if (c+h > b / 2)
            cout << b * 2 - 1 << endl;
        else
            cout << (c + h) * 2 + 1 << endl;
    }
    return 0;
}
