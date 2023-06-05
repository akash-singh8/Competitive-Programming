#include <iostream>

using namespace std;

int main()
{

    int a, b, years = 0;
    cin >> a >> b;

    while (a <= b)
    {
        a *= 3;
        b *= 2;
        years += 1;
    }

    cout << years;

    return 0;
}