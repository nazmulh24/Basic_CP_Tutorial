//-> String Task
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u'  && s[i]!='y')
            cout << "." << s[i];
    }
    cout << endl;
    return 0;
}
