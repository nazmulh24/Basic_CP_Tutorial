#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T; // (1 ≤ T ≤ 100)
    for (int i = 1; i <= T; i++)
    {
        int N;
        cin >> N; // (0 ≤ N ≤ 2,147,483,647)
        (N % 2 == 0 ? (cout << "even" << endl) : (cout << "odd" << endl));
    }
    return 0;
}
