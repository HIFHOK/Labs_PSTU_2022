#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Введите длину катета" << endl;
    
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}