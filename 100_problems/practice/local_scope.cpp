#include <iostream>
#include <vector>
#include <algorithm>
#define For(i, times) for(int (i) = 0; times > (i); (i++))


using namespace std;

int main(void)
{
    int n = 2; 


For (i, 3)
{
    cout << "outter i :"<< i << endl;
    for (int i = 10; i < 13 ; i++)
    {
    cout << "inner i :"<< i << endl;
    }
}

    cout << "bitwise i = 4; (1 << i) :"<< (1 << 4) << endl;
    return 0;
}

/**************************
link of the problem:
https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_5_A&lang=ja

Filesize: Byte
Runtime :   ms
Memory  :
***************************/