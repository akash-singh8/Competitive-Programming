#include <iostream>

using namespace std;

int main()
{
    string expression;
    cin >> expression;

    for (int i = 0; i < expression.length() - 2; i += 2)
    {
        for (int j = 0; j < expression.length() - 2; j += 2)
        {
            if (expression[j] > expression[j + 2])
            {
                char temp = expression[j];
                expression[j] = expression[j + 2];
                expression[j + 2] = temp;
            }
        }
    }

    cout << expression;

    return 0;
}