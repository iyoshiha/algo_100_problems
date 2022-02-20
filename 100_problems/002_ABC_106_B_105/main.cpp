#include <iostream>
using namespace std;

int main(void)
{
    unsigned int n;
    unsigned int i, j;
    unsigned int divisor_count;
    unsigned int ans;

    cin >> n;
    cout << n << endl;
    ans = 0;
    i = 2;
    while (n >= i)
    {
        divisor_count = 2;
        j = 2;        // i self and 1 is already counted;
        while (i > j) // i self and 1 is already counted;
        {
            if (i % j == 0)
                divisor_count++;
            j++;
        }
        if (divisor_count == 8)
            ans++;
        i += 2;
    }
    cout << ans << endl;
    return 0;
}

/**************************
link of the problem:
https://atcoder.jp/contests/abc106/tasks/abc106_b
***************************/