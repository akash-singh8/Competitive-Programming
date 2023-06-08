#include <iostream>

using namespace std;

int main()
{
    int n, antonWins = 0;
    string games;
    cin >> n >> games;

    for (int i = 0; i < n; i++)
    {
        if (games[i] == 'A')
        {
            antonWins += 1;
        }
    }

    int danikWins = n - antonWins;

    if (danikWins == antonWins)
    {
        cout << "Friendship";
    }
    else if (antonWins > danikWins)
    {
        cout << "Anton";
    }
    else
    {
        cout << "Danik";
    }

    return 0;
}