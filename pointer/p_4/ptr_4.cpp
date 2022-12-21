#include <iostream>

int main()
{
    int min, a, max, n;
    int* prtmin = &min;
    int* prtmax = &max;
    int* prta = &a;
    
    std::cout << "Введите длину последовательности " << std::endl;
    std::cin >> n;
    
    std::cout << "Введите число " << std::endl;
    std::cin >> min;
    
    *prtmax = *prtmin;
    
    for (int i = 1; i < n; i++)
    {
        std::cout << "Введите число " << std::endl;
        std::cin >> a;
        
        if (*prta > *prtmax)
        {
            *prtmax = *prta;
        }

        if (*prta < *prtmin)
        {
            *prtmin = *prta;
        }

    }
    
    std::cout << "Наибольшее число последовательности " << *prtmax << std::endl;
    std::cout << "Наименьшее число последовательности " << *prtmin << std::endl;
    return 0;
}