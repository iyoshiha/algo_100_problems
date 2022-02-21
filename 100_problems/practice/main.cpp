#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<int> dnaLen;
    vector<string> dnaSeq;

    dnaLen.push_back(5);
    dnaLen.push_back(3);
    dnaLen.push_back(10);
    for (int i:dnaLen) 
    {
        cout << i << endl;
    }
    dnaSeq.push_back("CCTAGATATA");dnaSeq.push_back("CAGTT");
    dnaSeq.push_back("GCC");
    for (string str:dnaSeq) {
        cout << str << endl;
        for (char c : str)
        cout << c << endl;
    }
    // int x = 12;
    // int ans = 0;
    // int S[4] ;
    // for (int i = 0; i < 4; i++)
    // {
    //     S[i] = 0x13;
    // }
    // cout << S[0] << endl;
    // S[0] = S[0] &~ (2);
    // cout << S[0] << endl;

    // cout << "+++++++++++++"<< endl;

    // cout << S[1] << endl;
    // S[1] = __builtin_popcount(S[1]);
    // cout << S[1] << endl;

    // cout << S[2] << endl;
    // S[2] = S[2] &~ (2);
    // cout << S[2] << endl;
    
// S[0]
// S[0]
// S[0]
    return 0;
}

/**************************
link of the problem:


Filesize: Byte
Runtime :   ms
Memory  :
***************************/