#include <iostream>

using namespace std;

int main()
{
    start:
    int i, kpr, kzv, p;
    float n;
    char pr = ' ';
    char zv = '*';

    cout << "Введите нечётное число больше 3" << endl;

    cin >> n;

    if (((int)n < 3) or ((int)n % 2 != 1))
    {
        goto start;
    }
    kpr = n / 2;
    
    kzv = 1;

    for (i = 1; i <= n; i += 2)
    {
        for (p = 1; p <= kpr; p++) 
        {
        cout << pr;
        }
        
        for (p = 1; p <= kzv; p++)
        {
            cout << zv;
        }

        if (kzv != n)
        {
            cout << endl;
        }
        kpr--;
        kzv += 2;
    }

    return 0;
}