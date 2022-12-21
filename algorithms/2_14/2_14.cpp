#include <iostream>

using namespace std;
 
int main()
{
    int n;
    int sum=0;
 
    cout << "Введите натуральное N" << endl;
    
    cin >> n;
 
    while (n!=0)
    {
        sum += n%10;
        n /= 10;
    }
    cout << "Сумма цифр числа равна " << sum << endl;
    
    return 0;
}