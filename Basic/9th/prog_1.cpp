//--> Young Physicist
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int> > ve(n, vector<int>(3));
    for (int i = 0; i < n; ++i)
        cin >> ve[i][0] >> ve[i][1] >> ve[i][2];

    vector<int> sum_vector(3, 0);
    for (int i = 0; i < n; ++i)
    {
        sum_vector[0] += ve[i][0];
        sum_vector[1] += ve[i][1];
        sum_vector[2] += ve[i][2];
    }
    if (sum_vector[0] == 0 && sum_vector[1] == 0 && sum_vector[2] == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
