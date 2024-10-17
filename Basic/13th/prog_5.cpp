//--> Bit++
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    while (n--)
    {
        string x;
        cin >> x;
        int l = x.length();
        for (int i = 0; i < l; i++)
        {
            if (x[i] == '+' && x[i + 1] == '+')
                count++;
            else if (x[i] == '-' && x[i + 1] == '-')
                count--;
        }
    }
    cout << count << endl;
    return 0;
}
