#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    int max;
    string str;
    int count;

    max = 0;
    count = 0;
    cin >> str;
    for (char c : str)
    {
        if (c == 'A' || c == 'C' || c == 'G' || c == 'T')
        {
            count++;
            if (max < count)
                max = count;
        }
        else
            count = 0;
    }
    cout << max << endl;
    return 0;
}

/**************************
link of the problem:
https://atcoder.jp/contests/abc122/tasks/abc122_b

Filesize:484 Byte
Runtime :4ms
Memory  :3620
***************************/