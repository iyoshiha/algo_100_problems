#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int        N, M, K;
    cin >> N; cin >> M;
    int        s[M][N + 1];
    int        p[M];

    for (int i = 0; i < M; i++)
    {
        for (int j = 1; i < K; j++)
        {
            cin >> s[i][0];
            cin >> s[i][j];
        }
    }
    for (int i = 0; i < M; i++)
    {
    cin >> p[i];
    }


    return 0;
}


/**************************
link of the problem:
https://atcoder.jp/contests/apg4b/tasks/APG4b_r?lang=ja

Filesize: Byte
Runtime :   ms
Memory  :
***************************/