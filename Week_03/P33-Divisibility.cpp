#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        if (a < b)
        {
            cout << b - a << endl;
        }
        else if (a % b == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            int currMultiple = a / b;
            int finalMultiple = b * (currMultiple + 1);
            int difference = finalMultiple - a;

            cout << difference << endl;
        }
    }

    return 0;
}