#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int max;
    int i;
    string str;
    int count;

    i = 0;
    max = 0;
    count = 0;
    cin >> str;
    for (char c : str)
    {
        if (str[i] == 'A' || str[i] == 'C' || str[i] == 'G' || str[i] == 'T')
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
***************************/