#include <iostream>

using namespace std;

int main()
{

    string first, second;
    cin >> first >> second;

    if (first == second)
    {
        cout << "0";
    }
    else
    {
        // first approach
        // bool flag = true;
        // for (int i = 0; i < first.length(); i++)
        // {
        //     if (first[i] != second[i] && abs(first[i] - second[i]) != 32)
        //     {
        //         if (first[i] < second[i])
        //             cout << "-1";
        //         else
        //             cout << "1";
        //         flag = false;
        //         break;
        //     }
        // }

        // if (flag)
        //     cout << "0";

        // another approach
        for (int i = 0; i < first.length(); i++)
        {
            if (first[i] > 96)
            {
                first[i] -= 32;
            }
            if (second[i] > 96)
            {
                second[i] -= 32;
            }
        }

        if (first == second)
            cout << "0";
        else if (first < second)
            cout << "-1";
        else
            cout << "1";
    }

    return 0;
}