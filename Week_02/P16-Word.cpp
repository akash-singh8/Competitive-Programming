#include <iostream>

using namespace std;

int main()
{
    string word;
    cin >> word;

    int upperCount = 0, lowerCount = 0;

    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] > 96)
            lowerCount += 1;
        else
            upperCount += 1;
    }

    if (lowerCount >= upperCount)
    {
        for (int i = 0; i < word.length(); i++)
        {
            if (word[i] < 'a')
            {
                word[i] += 32;
            }
        }
    }
    else
    {
        for (int i = 0; i < word.length(); i++)
        {
            if (word[i] >= 'a')
            {
                word[i] -= 32;
            }
        }
    }

    cout << word;

    return 0;
}