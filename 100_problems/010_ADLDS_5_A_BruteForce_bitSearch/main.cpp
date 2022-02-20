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

    for (int i : A)
    cout << i << endl;
    return 0;
}

/**************************
link of the problem:
https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_5_A&lang=ja

Filesize: Byte
Runtime :   ms
Memory  :
***************************/