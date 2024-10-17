#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    int A[N][M];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> A[i][j];
        }
    }
    int X;
    cin >> X;
    bool match = false;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (X == A[i][j])
            {
                match = true;
                break;
            }
        }
        if (match)
            break;
    }
    if (match)
        cout << "will not take number" << endl;
    else
        cout << "will take number" << endl;
    return 0;
}
