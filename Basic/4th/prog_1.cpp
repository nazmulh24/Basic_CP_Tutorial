#include <iostream>
// #include <vector> //Dynamic Array
using namespace std;
int main()
{
    int N, sum = 0;
    cin >> N; // 1≤N≤10^5
    // vector<int> A(4 * N - 1);
    int A[4 * N - 1];
    for (int i = 0; i < (4 * N - 1); i++)
    {
        cin >> A[i];
        sum += A[i];
    }
    int Tsum = 4 * (N * (N + 1) / 2);
    int mCard = Tsum - sum;
    cout << mCard << endl;
    return 0;
}
