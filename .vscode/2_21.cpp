#include <iostream>

using namespace std;

int main()
{
    float n, perv;
    bool nool = false; // flag na 0
    bool vozr = true;
    
    cout << "Введите число" << endl;
    cin >> perv;
    
    while (nool != true)
    {
        cout << "Введите число" << endl;
        cin >> n;
        
        if (n == 0)
        {
            nool = true;
        
        }
        if ((perv < n)||(n == 0))
        {
            perv = n; 
        }
        else
        {
            vozr = false;
        }
    }
    if (vozr == false)
    {
        cout << "Числа идут не по возрастанию" << endl;
    }
    else
    {
        cout << "Числа идут по возрастанию" << endl;
    }
    return 0;
}