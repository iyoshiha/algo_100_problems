#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int x = 12;
    int ans = 0;

    for (int i = 0; i < 4; i++)
    {
        ans = x & ((1 << i) + 4);
        cout << ans << endl;
        ans = 0;

    }

    return 0;
}

/**************************
link of the problem:


Filesize: Byte
Runtime :   ms
Memory  :
***************************/