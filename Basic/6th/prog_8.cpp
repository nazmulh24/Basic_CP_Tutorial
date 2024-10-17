#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, M, x, y;
    cin >> N >> M;
    char A[N][M];
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; i <= M; j++)
        {
            cin >> A[i][j];
        }
    }
    cin >> x >> y;
    if (A[x][y] == 'x' && A[x][y + 1] == 'x' && A[x][y + 2] == 'x' && A[x + 1][y] == 'x' && A[x + 1][y + 2] == 'x' && A[x + 2][y] == 'x' && A[x + 2][y + 1] == 'x' && A[x + 2][y + 2] == 'x')
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}
