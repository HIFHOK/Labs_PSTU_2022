#include <iostream>

#include <cmath>

using namespace std;

int main()
{
    float a, b, c, d, x1, x2;

    cout << "Введите коэфициент а" << endl;

    cin >> a;

    
    cout << "Введите коэфициент b" << endl;

    cin >> b;

    
    cout << "Введите коэфициент c" << endl;

    cin >> c;

    if (a == 0 && b == 0 && c == 0)
    {
        cout << "Решений бесконечное множество" << endl;
    }
    
     else if (a == 0 && b == 0)
    {
        cout << "Решения нет" << endl;
    }
    
     else if (a == 0)
    {
        x1 = (-1*c)/b;
        
        cout << "x1= " << x1 << "; Второго корня не существует" << endl;
    }
    else
    {
        d = b*b - 4*a*c;

        if (d > 0) 
        {
        
        x1 = (-1*b-sqrt(d))/(2*a);

        x2 = (-1*b+sqrt(d))/(2*a);

        cout << "x1= " << x1 << "  x2= " << x2 << endl;
        }
        else if (d == 0)
        {
        
        x1 = -1*b/(2*a);

        cout << "x1= " << x1 << "; Второго корня не существует" << endl;
        }
        else
        {
            cout << "Решений нет" << endl;
        }
    }
    
    return 0;
}