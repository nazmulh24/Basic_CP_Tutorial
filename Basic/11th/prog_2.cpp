//--> I_love_%username%
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> points(n);
    for (int i = 0; i < n; ++i)
        cin >> points[i];
    int count = 0;
    int best_score = points[0];
    int worst_score = points[0];
    for (int i = 1; i < n; ++i)
    {
        if (points[i] > best_score)
        {
            best_score = points[i];
            count++;
        }
        else if (points[i] < worst_score)
        {
            worst_score = points[i];
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
