#include <iostream>

using namespace std;

int main()
{

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int countSame = 0;

    if (a == b || a == c || a == d)
        countSame += 1;
    if (b == c || b == d)
        countSame += 1;
    if (c == d)
        countSame += 1;

    cout << countSame;

    return 0;
}