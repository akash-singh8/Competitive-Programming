#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    n -= 1;
    string prevPair;
    cin >> prevPair;

    int maxGroup = 1;
    while (n--)
    {
        string pair;
        cin >> pair;

        if (prevPair[0] != pair[0])
        {
            maxGroup += 1;
        }
        prevPair = pair;
    }

    cout << maxGroup;

    return 0;
}