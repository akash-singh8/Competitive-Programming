#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n < 26)
    {
        cout << "NO";
    }
    else
    {
        bool arr[26];
        for (int i = 0; i < 26; i++)
        {
            arr[i] = false;
        }

        for (int i = 0; i < n; i++)
        {
            char curr;
            cin >> curr;

            if (curr < 97)
            {
                curr += 32;
            }

            arr[curr - 97] = true;
        }

        for (int i = 0; i < 26; i++)
        {
            if (!arr[i])
            {
                cout << "NO";
                return 0;
            }
        }

        cout << "YES";
    }

    return 0;
}