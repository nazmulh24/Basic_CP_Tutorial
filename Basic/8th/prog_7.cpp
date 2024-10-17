//-> Discovering Permutations
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N, K;
        cin >> N >> K;
        string letter = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        cout << "Case " << i+1 << ":" << endl;
        int count = 0;
        do
        {
            cout << letter.substr(0, N) << endl;
            count++;
        } while (next_permutation(letter.begin(), letter.begin() + N) && count < K);
    }
    return 0;
}
