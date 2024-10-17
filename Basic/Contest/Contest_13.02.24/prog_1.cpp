#include <bits/stdc++.h>
using namespace std;
string get_word(int n)
{
    for (int i = 1; i <= 26; ++i)
    {
        for (int j = 1; j <= 26; ++j)
        {
            for (int k = 1; k <= 26; ++k)
            {
                if (i + j + k == n)
                {
                    string word = "";
                    word += char(i + 96);
                    word += char(j + 96);
                    word += char(k + 96);
                    return word;
                }
            }
        }
    }
    return "";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string word = get_word(n);
        cout << word << endl;
    }
    return 0;
}
