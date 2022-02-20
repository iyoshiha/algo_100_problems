#include <iostream>
using namespace std;

int main(void)
{
    int n[1024];
    int x[1024];
    int max = 0;
    int i, j, k, l;
    int ans;

    do {
    cin>> n[max];
    cin>> x[max];
    max++;
    } while (n[max - 1] != 0 || x[max - 1] != 0);
    max--;

    l = 0;
    while (max > l)
    {
        ans = 0;
        i = 1;
        while (i < n[l] - 1)
        {
            j = i + 1;
            while (j < n[l])
            {
                k = j + 1;
                while (k <= n[l])
                {
                    if (x[l] == i + j + k)
                        ans++;
                    k++;
                }
                j++;
            }
            i++;
        }
        cout << ans << endl;
        l++;
    }
    return 0;
}

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_7_B&lang=ja