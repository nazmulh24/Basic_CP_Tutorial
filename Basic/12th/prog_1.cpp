//--> Is your horseshoe on the other hoof?
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s[4], count = 0;
    for (int i = 0; i < 4; i++)
        cin >> s[i];
    sort(s, s + 4);
    for (int i = 0; i < 4; i++)
    {
        if (s[i] == s[i + 1])
            count++;
    }
    cout << count << endl;
    return 0;
}
