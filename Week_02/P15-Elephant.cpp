#include <iostream>

using namespace std;

int main()
{

    int x, steps = 0;
    cin >> x;

    while (x)
    {
        if (x > 4)
        {
            steps += x / 5;
            x = x % 5;
        }
        else if (x > 3)
        {
            steps += x / 4;
            x = x % 4;
        }
        else if (x > 2)
        {
            steps += x / 3;
            x = x % 3;
        }
        else if (x > 1)
        {
            steps += x / 2;
            x = x % 2;
        }
        else
        {
            steps += 1;
            x -= 1;
        }
    }

    cout << steps;

    return 0;
}