#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int a, b, prevIn, maxDiff = 0;
    cin >> a >> b;
    int initialIn = b;
    prevIn = b;

    for (int i = 1; i < n; i++)
    {
        cin >> a >> b;

        int currDiff = prevIn - a + b;
        prevIn = currDiff;

        if (maxDiff < currDiff)
        {
            maxDiff = currDiff;
        }
    }

    if (initialIn > maxDiff)
    {
        cout << initialIn;
    }
    else
    {
        cout << maxDiff;
    }

    return 0;
}