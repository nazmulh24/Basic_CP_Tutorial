//--> Vlad and the Best of Five
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        int c1 = 0, c2 = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'A')
                c1++;
            else if (str[i] == 'B')
                c2++;
        }
        if (c1 > c2)
            cout << "A" << endl;
        else
            cout << "B" << endl;
    }
    return 0;
}
