#include <iostream>

int main()
{
    int n, tmp;
int* ptr1;
int* ptr2;

std::cin >> n;
ptr1 = &n;
tmp = *ptr1;
std::cin>>n;
ptr2 = &n;
*ptr1 = *ptr2;
*ptr2 = tmp;

std::cout << *ptr1 << std::endl;
std::cout << *ptr2 << std::endl;
    return 0;
}