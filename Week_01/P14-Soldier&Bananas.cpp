#include <iostream>

using namespace std;

int main()
{

    int k, n, w, toBorrow = 0;
    cin >> k >> n >> w;

    int sum = (w * (w + 1)) / 2;
    int totalAmt = sum * k;

    if (totalAmt > n)
        cout << totalAmt - n;
    else
        cout << 0;

    return 0;
}