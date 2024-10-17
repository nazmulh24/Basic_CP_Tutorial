#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char arr[n][n];
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
                cin >> arr[i][j];
        }
        int aa[n], row = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (arr[i][j] == '1')
                    row++;
            }
            aa[i] = row;
            row = 0;
        }
        for (int i = 0; i < n; i++)
        {
            if (aa[i] == 0)
                continue;
            else if (aa[i] == aa[i + 1])
            {
                cout << "SQUARE" << endl;
                break;
            }
            else
            {
                cout << "TRIANGLE" << endl;
                break;
            }
        }
    }
    return 0;
}
