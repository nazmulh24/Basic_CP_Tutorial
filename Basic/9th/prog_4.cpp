//--> Borze
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    string count = "";
    int i = 0;
    while (i < str.length())
    {
        if (str[i] == '.')
        {
            count += '0';
            i++;
        }
        else if (str[i] == '-' && str[i + 1] == '.')
        {
            count += '1';
            i += 2;
        }
        if (str[i] == '-' && str[i + 1] == '-')
        {
            count += '2';
            i += 2;
        }
    }
    cout << count << endl;
    return 0;
}
