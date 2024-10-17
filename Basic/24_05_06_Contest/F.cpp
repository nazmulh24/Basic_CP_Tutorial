#include <iostream>
#include <vector>
using namespace std;

const int MAX_N = 305;
char grid[MAX_N][MAX_N];
bool visited[MAX_N][MAX_N];

int dx[] = {1, 1, 1, 0, 0, -1, -1, -1};
int dy[] = {1, 0, -1, 1, -1, 1, 0, -1};

void dfs(int x, int y)
{
    visited[x][y] = true;
    for (int k = 0; k < 8; ++k)
    {
        int nx = x + dx[k];
        int ny = y + dy[k];
        if (nx >= 0 && nx < MAX_N && ny >= 0 && ny < MAX_N &&
            grid[nx][ny] == '.' && !visited[nx][ny])
        {
            dfs(nx, ny);
        }
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, x;
        cin >> n >> m >> x;

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> grid[i][j];
                visited[i][j] = false;
            }
        }

        // Freeze lakes starting from (1, 1) using DFS
        dfs(0, 0);

        // Check if bottom-right cell is reachable
        if (visited[n - 1][m - 1])
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
