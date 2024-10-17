#include <bits/stdc++.h>
using namespace std;

int maxBeautyFactor(vector<int> &A)
{
    int n = A.size();
    int peaks = 0;
    for (int i = 1; i < n - 1; ++i)
    {
        if (A[i] > A[i - 1] && A[i] > A[i + 1]) // Peak condition
            peaks++;
    }
    if (peaks == 0 || peaks % 2 != 0) // If there are no peaks or peaks are odd, cannot form beautiful array
        return -1;
    return n / peaks;
}

int main()
{
    int T;
    cin >> T;
    for (int t = 1; t <= T; ++t)
    {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> A[i];
        }
        int beautyFactor = maxBeautyFactor(A);
        cout << "Case " << t << ": " << beautyFactor << endl;
    }
    return 0;
}
