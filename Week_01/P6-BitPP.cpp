#include <iostream>

using namespace std;

int main()
{
    int n, x = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string operation;
        cin >> operation;

        if (operation[1] == '+')
        {
            x += 1;
        }
        else
        {
            x -= 1;
        }
    }

    cout << x;

    return 0;
}