#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string feeling = "I hate";

    for (int i = 1; i < n; i++)
    {

        if (i & 1)
        {
            feeling += " that I love";
        }
        else
        {
            feeling += " that I hate";
        }
    }

    feeling += " it";

    cout << feeling;

    return 0;
}