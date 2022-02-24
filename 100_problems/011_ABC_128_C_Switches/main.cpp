#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define ON 1
#define OFF 0
#define NON 2
#define light_is_on 1
int main(void)
{
    int N, M, K;
    cin >> N;
    cin >> M;
    int s[M][N + 1];
    int p[M];
    int table[M][M][N] = {NON};
    int count;
    int cal;

        for (int i = 0; i < M; i++)
    {
        for (int j = 1; j < K; j++)
        {
            cin >> s[i][0];
            cin >> s[i][j];
        }
    }
    for (int i = 0; i < M; i++)
    {
    cin >> p[i];
    }

    int l = 0;
    for (int m = 0; m < M; m++)
    {
    for (int bit = 0; bit <= (1 << K); bit++)
    {
        cal = 0;
        for (int i = 0; i < K; i++)
        {
        cal += bit & (1 << i);
        if (light_is_on)
        for (int k = 0; k < K; k++)
        {
            table[m][l][k] = bit & (1 << k);
        }
        l++;        
        }
    }

    }

    return 0;
}


/**************************
link of the problem:
https://atcoder.jp/contests/abc128/tasks/abc128_c

Filesize: Byte
Runtime :   ms
Memory  :
***************************/