#include <iostream>

using namespace std;

int main()
{

    string letters;
    getline(cin, letters);

    bool distinct[26];

    for (int i = 0; i < 26; i++)
    {
        distinct[i] = 0;
    }

    for (int i = 0; i < letters.length(); i++)
    {
        char curr = letters[i];
        if (curr > 96 && curr < 123)
        {
            distinct[curr - 97] = true;
        }
    }

    int countDistinct = 0;
    for (int i = 0; i < 26; i++)
    {
        if (distinct[i])
        {
            countDistinct += 1;
        }
    }

    cout << countDistinct;

    return 0;
}