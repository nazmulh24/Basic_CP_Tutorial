#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int A[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> A[i][j];
        }
    }
    int sumMain = 0, sumSec = 0;
    for (int i = 0; i < N; i++)
    {
        sumMain += A[i][i];
        sumSec += A[i][N - 1 - i];
    }
    int Sum = abs(sumMain - sumSec);
    cout << Sum << endl;
    return 0;
}
