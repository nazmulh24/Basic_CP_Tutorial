#include <bits/stdc++.h>
using namespace std;

void printMissingCards(int n, char cards[][3])
{
    char suits[] = {'S', 'H', 'C', 'D'};
    int ranks[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
    int present[4][13] = {0};
    for (int i = 0; i < n; ++i)
    {
        char suit = cards[i][0];
        int rank = cards[i][1] - '0';
        int suitIndex, rankIndex;
        switch (suit)
        {
        case 'S':
            suitIndex = 0;
            break;
        case 'H':
            suitIndex = 1;
            break;
        case 'C':
            suitIndex = 2;
            break;
        case 'D':
            suitIndex = 3;
            break;
        }
        rankIndex = rank - 1;
        present[suitIndex][rankIndex] = 1;
    }
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 13; ++j)
        {
            if (!present[i][j])
            {
                printf("%c %d\n", suits[i], ranks[j]);
            }
        }
    }
}

int main()
{
    int n;
    cin >> n; // (n ≤ 52)
    char cards[n][3];
    for (int i = 0; i < n; ++i)
        scanf("%s", cards[i]);
    printMissingCards(n, cards);
    return 0;
}
