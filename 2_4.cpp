#include <iostream>

using namespace std;

int main()
{
    start:
    int i, kpr, kzv, p;
    float n;
    char pr = ' ';
    char zv = '*';

    cout << "Введите число больше 2" << endl;

    cin >> n;

    if ((n <= 2) or ((int)n != n))
    {
        goto start;
    }
    
    kpr = n-1;
    
    kzv = 1;
    
    for (i = 0; i <= n; i++)
    {
        for (p = 1; p <= kpr; p++) 
        {
        cout << pr;
        }
        
        for (p = 1; p <= kzv; p++)
        {
            cout << zv;
        }

        if (kzv < n)
        {
            cout << endl;
        }

        if (kzv == n)
        {
            break;
        }
        
        kpr--;
        kzv++;
    }

    return 0;
}