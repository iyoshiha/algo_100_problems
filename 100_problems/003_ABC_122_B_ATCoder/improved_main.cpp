#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int max;
    int i;
    string substr = "ACGT";
    string str;
    int count;
    bool match;

    cin >> str;

    i = 0;
    max = 0;
    count = 0;
    while (str[i])
    {
        match = false;
        if (str[i] == 'A' || str[i] == 'C' || str[i] == 'G' || str[i] == 'T')
        {
            count++;
            match = true;
        }
        if (match == true)
        {
            if (max < count)
                max = count;
        }
        else
            count = 0;
        i++;
    }
    cout << max << endl;

    return 0;
}

/**************************
link of the problem:
https://atcoder.jp/contests/abc122/tasks/abc122_b
***************************/