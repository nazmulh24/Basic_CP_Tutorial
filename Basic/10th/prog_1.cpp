//--> Lights Out
#include <bits/stdc++.h>
using namespace std;

int toggle(int presses)
{
    return 1 - (presses % 2);
}
int main()
{
    vector<vector<int>> grid(3, vector<int>(3));
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
            cin >> grid[i][j];
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
            grid[i][j] = toggle(grid[i][j]);
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (grid[i][j] == 1)
                grid[i][j + 1] = ;
            if (i > 0)
                grid[i-1][j] = 0;
            if (j > 0)
                grid[i][j + 1] = 0;
            if (i < 2)
                grid[i][j + 1] = 0;
            if (j < 2)
                grid[i][j + 1] = 0;
        }
    }
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
            cout << grid[i][j];
        cout << endl;
    }
    return 0;
}
