#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int n, k;

    cout << "Введите количество звёздочек в квадрате";

    cin >> n;

    k = sqrt(n);

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}