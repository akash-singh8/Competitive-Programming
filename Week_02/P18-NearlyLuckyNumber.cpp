#include <iostream>

using namespace std;

int main()
{
    long long n;
    long long luckyCount = 0;
    cin >> n;

    while (n)
    {
        if (n % 10 == 4 || n % 10 == 7)
            luckyCount += 1;
        n /= 10;
    }

    if (luckyCount == 4 || luckyCount == 7)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
