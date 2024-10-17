//--> Beautiful Matrix
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int> > matrix(5, vector<int>(5));
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
            cin >> matrix[i][j];
    }
    int moves = 0;
    int row, col;
    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            if (matrix[i][j] == 1)
            {
                row = i + 1;
                col = j + 1;
                break;
            }
        }
    }
    moves = abs(row - 3) + abs(col - 3);
    cout << moves << endl;
    return 0;
}
