#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        string word;

        cin >> word;

        int wordLength = word.length();

        if (wordLength > 10)
        {
            cout << word[0] << wordLength - 2 << word[wordLength - 1] << endl;
        }
        else
        {
            cout << word << endl;
        }
    }

    return 0;
}