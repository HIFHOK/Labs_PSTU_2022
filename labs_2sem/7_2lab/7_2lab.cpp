#include <iostream>
#include <cstdarg>

using namespace std;

int Sum(int n, ...)
{
    va_list vl; 
    va_start(vl, n);
    int r = 0;
 r += va_arg(vl, int);
    for (int i = 0; i < n-1; ++i)
        r += va_arg(vl, int)*2;
    va_end(vl); 
    return r;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    cout <<"Вычисление суммы для 5 параметров"<<endl<< Sum(5, 1, 2, 3, 4, 5) << endl;
    cout <<"Вычисление суммы для 10 параметров"<<endl<< Sum(10, 1, 2, 3, 4, 5, 6, 7, 8,9,10) << endl;
    cout <<"Вычисление суммы для 12 параметров"<<endl<< Sum(12, 1, 2, 3, 4, 5, 6, 7, 8,9,10,11,12) << endl;
    return 0;
}
