#include <iostream>

using namespace std;

int main()
{
    int n, f, a;
    cout <<"Какова длина последовательности?"<< endl;

    cin >> n;

    cout <<"Введите число"<< endl;

    cin >> f;

    for (int i = 1; i < n; i++)
    {
        cout <<"Введите число"<< endl;

        cin >> a;

        if (a > f)
        {
            f = a;
        }
    }
    cout << f;
    return 0;
}
