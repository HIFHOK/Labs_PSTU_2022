
//17 вариант
//1) Реализовать с использованием массива двунаправленное кольцо (просмотр возможен в обе стороны, от последнего 
//элемента можно перейти к первому).
//2) Распечатать полученный массив, начиная с К-ого элемента и до К-1 ( по кольцу влево).
//3) Добавить в кольцо первый и последний элементы.
//4) Распечатать полученный массив, начиная с К-ого элемента (и до К+1 по кольцу вправо).

#include <iostream>
#include <stdlib.h>


int main()
{
  int n, p, q, var;
  int a[100];

  std::cout << "Введите длину массива" << std::endl;

  std::cin >> n;
  
  for(int i = 0; i < n; i++)
    {
        a[i] = rand()%100;
    }

    for(int i = 0; i < n; i++)
    {
        std::cout << a[i] << " ";
    }
  std::cout << std::endl;

  std::cout << "Считать по индексам(1) или номерам(2)?" << std::endl;

  std::cin >> var;

  switch(var)
    {
      case(1):
        {
          std::cout << "С какого элемента вывести?" << std::endl;

          std::cin >> p;

          q = p;
          
          for (p; p < n; p++)
            {
              std::cout << a[p] << " ";
            }
          for (int i = 0; i < q; i++)
            {
              std::cout << a[i] << " ";
            }
          std::cout << std::endl;

          std::cout << "Какой элемент добавить в начало?" << std::endl;
          std::cin >> q;
          p = n-1;
          
          for(p; p >= 0 ; p--)
            {
              a[p+1] = a[p];
            }
          a[0] = q;
          
          std::cout << "Какой элемент добавить в конец?" << std::endl;
          std::cin >> q;

          a[n+1] = q;

          std::cout << "С какого элемента вывести?" << std::endl;

          std::cin >> p;

          q = p;
          
          for (p; p >= 0; p--)
            {
              std::cout << a[p] << " ";
            }
          for (int i = n+1; i > q; i--)
            {
              std::cout << a[i] << " ";
            }
          break;
        }
      case(2):
        {
          std::cout << "С какого элемента вывести?" << std::endl;

          std::cin >> p;

          q = p;
          
          for (p; p <= n; p++)
            {
              std::cout << a[p-1] << " ";
            }
          for (int i = 1; i < q; i++)
            {
              std::cout << a[i-1] << " ";
            }
          std::cout << std::endl;

          std::cout << "Какой элемент добавить в начало?" << std::endl;
          std::cin >> q;
          p = n-1;
          
          for(p; p >= 0 ; p--)
            {
              a[p+1] = a[p];
            }
          a[0] = q;
          
          std::cout << "Какой элемент добавить в конец?" << std::endl;
          std::cin >> q;

          a[n+1] = q;

          std::cout << "С какого элемента вывести?" << std::endl;

          std::cin >> p;

          q = p;
          
          for (p; p >= 1; p--)
            {
              std::cout << a[p-1] << " ";
            }
          for (int i = n+2; i > q; i--)
            {
              std::cout << a[i-1] << " ";
            }
          break;
          }
      default: 
        {
        std::cout << "Такого варианта нет, попробуйте снова" << std::endl;
        break;
        }
          
    }

  return 0;
}