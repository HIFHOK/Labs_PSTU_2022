#include <iostream>

#include <cmath>

using namespace std;
 
int main()
{
    int n, sum;

    sum = 0;
 
    cout << "Количество слагаемых N" << endl;
    
    cin >> n;
 
    for (int i = 1; i <= n; i++)
    {
        sum = sum + (i*pow(-1, i));
    }
    cout << sum << endl;

    return 0;
}