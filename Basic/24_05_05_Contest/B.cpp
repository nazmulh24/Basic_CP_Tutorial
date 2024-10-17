#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, x = 1;
    cin >> t;
    while (t--)
    {
        int c;
        cin >> c;
        c %= 30;
        cout << "Case #" << x << ":" << endl;
        x++;
        cout << ".............................." << endl;
        cout << ".............................." << endl;
        int h = 20 + c, t = 11 + c;
        int T = t, H = h;
        if (h > 30)
            H -= 30;
        if (t > 30)
            T -= 30;
        if (c < 21)
            for (int j = 1; j < 31; j++)
            {
                if (j == H)
                    cout << "H";
                else if (j == T)
                    cout << "T";
                else if (h > 30 && (j <= H || j >= T))
                    cout << "-";
                else if (j < H && j > T)
                    cout << "-";
                else
                    cout << ".";
            }
        else
            for (int j = 1; j < 31; j++)
            {
                if (j == H)
                    cout << "H";
                else if (j == T)
                    cout << "T";

                else if (j > T && j < H)
                    cout << "-";
                else
                    cout << ".";
            }
        cout << endl;
        cout << ".............................." << endl;
        cout << ".............................." << endl;
    }
    return 0;
}
