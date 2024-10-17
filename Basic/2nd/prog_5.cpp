#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T; // (1 ≤ T ≤ 10,000)
    for (int i = 1; i <= T; i++)
    {
        int N, sum = 0;
        cin >> N; // (10,000 ≤ N ≤ 99,999)
        int last = N % 10;
        int first = N / 10000;
        cout << "Sum = " << first + last << endl;
    }
    return 0;
}
