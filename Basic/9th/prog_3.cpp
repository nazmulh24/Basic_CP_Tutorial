// --> Queue at the School
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string str;
    cin >> str;
    for (int i = 0; i < t; i++)
    {
        int j = 0;
        while (j < n - 1)
        {
            if (str[j] == 'B' && str[j + 1] == 'G')
            {
                swap(str[j], str[j + 1]);
                j += 2;
            }
            else
                j += 1;
        }
    }
    cout << str << endl;
    return 0;
}
