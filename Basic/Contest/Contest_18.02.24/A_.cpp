//--> Thorns and Coins
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        string str;
        cin >> str;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '*' && str[i + 1] == '*')
                break;
            else if (str[i] == '.')
                continue;
            else if (str[i] == '*')
                continue;
            else if (str[i] == '@')
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
