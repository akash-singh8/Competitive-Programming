#include <iostream>

using namespace std;

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            int curr;
            cin >> curr;

            if (curr)
            {
                cout << abs(3 - i) + abs(3 - j);
                return 0;
            }
        }
    }

    return 0;
}