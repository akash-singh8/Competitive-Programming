#include <iostream>

using namespace std;

bool findDistinct(int year)
{
    int firstDigit = year / 1000;
    int secondDigit = (year / 100) % 10;
    int thirdDigit = (year / 10) % 10;
    int lastDigit = year % 10;

    if (firstDigit == secondDigit || firstDigit == secondDigit || firstDigit == thirdDigit || firstDigit == lastDigit || secondDigit == thirdDigit || secondDigit == lastDigit || thirdDigit == lastDigit)
    {
        return false;
    }
    return true;
}

int main()
{

    int year;
    cin >> year;
    year += 1;
    while (true)
    {
        if (findDistinct(year))
        {
            cout << year;
            break;
        }
        else
        {
            year++;
        }
    }

    return 0;
}