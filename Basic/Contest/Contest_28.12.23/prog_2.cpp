#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char square[3][3];
        // Input Latin square for each test case
        for (int i = 0; i < 3; ++i)
            for (int j = 0; j < 3; ++j)
                cin >> square[i][j];
        for (int i = 0; i < 3; i++)
        {
            // Find the missing letter for each row using an array
            int count[3] = {0}; // Initialize an array to store counts for 'A', 'B', 'C'
            for (int j = 0; j < 3; j++)
            {
                if (square[i][j] != '?')
                {
                    count[square[i][j] - 'A']++; // Increment count based on the letter
                }
            }
            for (int k = 0; k < 3; k++)
            {
                if (count[k] == 0)
                {
                    cout << char('A' + k);
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}
