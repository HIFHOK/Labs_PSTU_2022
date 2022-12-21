#include <iostream>

int main()
{
    int a = 10;
    int b = 20;
    int* ptra = &a;
    int* ptrb = &b;
    
    std::cout << "a= " << a << std::endl;
    std::cout << "b= " << b << std::endl;
    
    std::cout << "a+b= " << *ptra+*ptrb << std::endl;
    return 0;
}