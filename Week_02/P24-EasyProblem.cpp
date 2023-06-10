#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    bool flag = true;

    while (n--)
    {
        int difficulty;
        cin >> difficulty;

        if (difficulty)
        {
            cout << "HARD";
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << "EASY";
    }

    return 0;
}