#include <iostream>

using namespace std;

int main()
{
    string name;
    cin >> name;

    bool arr[26];

    for (int i = 0; i < 26; i++)
    {
        arr[i] = 0;
    }

    int distinctChar = 0;
    for (int i = 0; i < name.length(); i++)
    {
        bool isCharPresent = arr[name[i] - 97];
        if (!isCharPresent)
        {
            distinctChar += 1;
            arr[name[i] - 97] = 1;
        }
    }

    cout << ((distinctChar & 1) ? "IGNORE HIM!" : "CHAT WITH HER!");

    return 0;
}