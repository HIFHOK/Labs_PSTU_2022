#include <iostream>

using namespace std;
 
int main()
{
    int n, s, o, ost;
 
    cout << "Введите натуральное N" << endl;
    
    cin >> n;

    cout << "Введите цифру S" << endl;

    cin >> s;
 
    while (n!=0)
    {
        ost = n%10;

        if (s==ost)
        {
            o = 1;
        }
        n /= 10;
    }
    
    if (o = 1)
    {
        cout << "Цифра присутствует" << endl;
    }
    else
    {
        cout << "Цифры нет" << endl;
    }
    
    
    return 0;
}