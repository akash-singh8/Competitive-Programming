#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    bool levels[n];

    for (int i = 0; i < n; i++)
    {
        levels[i] = 0;
    }

    int p, q;
    cin >> p;

    while (p--)
    {
        int temp;
        cin >> temp;

        levels[temp - 1] = 1;
    }

    cin >> q;
    while (q--)
    {
        int temp;
        cin >> temp;

        levels[temp - 1] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        if (levels[i] == false)
        {
            cout << "Oh, my keyboard!";
            return 0;
        }
    }

    cout << "I become the guy.";

    return 0;
}