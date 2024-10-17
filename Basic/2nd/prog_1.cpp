#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T; // (T ≤ 100)
    for (int i = 1; i <= T; i++)
    {
        long long int N;
        cin >> N; // (0 ≤ N ≤ 15)
        long long int fact = 1;
        for (int j = N; j >= 1; j--)
        {
            fact *= j;
        }
        cout << fact << endl;
    }
    return 0;
}
