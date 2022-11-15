#include <iostream>

using namespace std;

int main()
{
    int n, max, min, a;
    cout <<"Какова длина последовательности?"<< endl;

    cin >> n;

    cout <<"Введите число"<< endl;

    cin >> max;

    min = max;

    for (int i = 1; i < n; i++)
    {
        cout <<"Введите число"<< endl;

        cin >> a;

        if (a > max)
        {
            max = a;
        }

        if (a < min)
        {
            min = a;
        }
    }
    cout << max+min;
    return 0;
}
