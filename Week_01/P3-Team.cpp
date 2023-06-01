#include <iostream>

using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;

        if (p1 + p2 + p3 > 1)
        {
            count += 1;
        }
    }

    cout << count;

    return 0;
}