//--> Boy or Girl
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    int l = unique(str.begin(), str.end()) - str.begin();
    if (l % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
    return 0;
}
