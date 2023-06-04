#include <iostream>

using namespace std;

int main()
{
    int n, toRemove = 0;
    string stones;

    cin >> n >> stones;

    for (int i = 1; i < n; i++)
    {
        if (stones[i - 1] == stones[i])
        {
            toRemove += 1;
        }
    }

    cout << toRemove;

    return 0;
}