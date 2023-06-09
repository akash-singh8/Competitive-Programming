#include <iostream>

using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[n - i - 1])
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}