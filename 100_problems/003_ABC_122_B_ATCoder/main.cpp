#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int max;
    int i, j;
    string substr = "ACGT";
    string str;
    int count;
    bool match;

    cin >> str;

    i = 0;
    j = 0;
    max = 0;
    count = 0;
    while (str[i])
    {
        match = false;
        j = 0;
        while (substr[j])
        {
            if (str[i] == substr[j])
            {
            cout << "str[" <<i << "] = " << str[i] <<" sub[" <<j << "] = "  << substr[j] << endl;
                count++;
                match = true;
                // if (max < count)
                //     max = count;
                break;
            }
            j++;
        }
        if (match = true)
            if (max < count)
                max = count;
        else
            count = 0;
        cout << "count is :" << count << endl;
        i++;
    }
    cout << max << endl;

    return 0;
}

/**************************
link of the problem:
https://atcoder.jp/contests/abc122/tasks/abc122_b
***************************/