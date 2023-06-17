#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    cin >> arr[0];
    int min_pos = 0, max_pos = 0;
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] <= arr[min_pos])
        {
            min_pos = i;
        }
        if (arr[i] > arr[max_pos])
        {
            max_pos = i;
        }
    }

    if (max_pos > min_pos)
    {
        cout << max_pos + (n - 1 - min_pos - 1);
    }
    else
    {
        cout << max_pos + (n - 1 - min_pos);
    }

    return 0;
}