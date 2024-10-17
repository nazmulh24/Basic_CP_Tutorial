#include <iostream>
using namespace std;
int main()
{
    int N, K, M;
    cin >> N >> K >> M; // (T ≤ 25)
    int tScore = 0;
    for (int i = 1; i <= N - 1; i++)
    {
        int A;
        cin >> A;
        tScore += A;
    }
    int minScoreNeed = max(0, N * M - tScore);
    if (minScoreNeed > K)
        cout << -1 << endl;
    else
        cout << minScoreNeed << endl;
    return 0;
}
