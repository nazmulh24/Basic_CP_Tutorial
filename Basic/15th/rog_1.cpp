//-->  Parallelepiped

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3];
    for (int i = 0; i < 3;i++)
        cin >> arr[i];
    int a = sqrt(arr[0] * arr[1] / arr[2]);
    int b = sqrt(arr[1] * arr[2] / arr[0]);
    int c = sqrt(arr[0] * arr[2] / arr[1]);
    int sum = 4 * (a + b + c);
    cout << sum << endl;
    return 0;
}
