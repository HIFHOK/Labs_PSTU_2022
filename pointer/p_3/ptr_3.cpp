#include <iostream>

int main()
{
    float a = 10;
    float b = 20;
    float* ptra = &a;
    float* ptrb = &b;
    
    std::cout << "Введите числа " << std::endl;
    std::cin >> a >> b;
    
    std::cout << "a+b= " << *ptra+*ptrb << std::endl;
    return 0;
}