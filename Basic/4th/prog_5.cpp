#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int ar[N];
    for (int i = 0; i < N; i++)
    {
        cin >> ar[i];
    }
    int H = ar[0];
    for (int i = 0; i < N; i++)
    {
        if (H < ar[i])
            H = ar[i];
        if (ar[i] >= ar[i + 1])
            break;
    }
    cout << H << endl;
    return 0;
}
