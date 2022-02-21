#include <iostream>
#include <vector>
#include <algorithm>
#define For(i, times) for(int (i) = 0; times > (i); (i++))

using namespace std;

int main(void)
{
    int n; cin >> n;
    int A[n]; For(i, n) cin >> A[i];
    int q; cin >> q;
    int M[q]; For(i, q) cin >> M[i];
    int ans[q] = {0};
    int result;
    int all_patern = (1 << n);

    for (int row = 1; row < all_patern; row++)
    {
        result = 0;
        for (int i = 0; i < n; i++)
        {
            if (row & (1 << i))
                result += A[i];
        }
        for (int i = 0; i < q; i++)
        {
            if (M[i] == result)
                ans[i] = 1;
        }
    }
    for (int i = 0; i < q; i++)
    {
        if (!(ans[i]))
            cout << "no" << endl;
        else
            cout << "yes" << endl;
    }
    return 0;
}

        // for (int i = 0; i < q; i++)
        // {
        // if (!(ans[i]))
        //     continue;
        // break;
        // }
/**************************
link of the problem:
https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_5_A&lang=ja

Filesize: Byte
Runtime :   ms
Memory  :
***************************/