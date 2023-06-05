#include <iostream>
#include <ctime>

const int n = 10;
const int m = 10;

void f_sum(int [n][m]);

int main() 
{
  srand(time(NULL));
  int tab[n][m];
  
  for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
        {
          tab[i][j] = rand()%10;
        }
    }
  for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
        {
          std::cout << tab[i][j] << " ";
        }
      std::cout << std::endl;
    }
  
  
  f_sum(tab);
  
  return 0;
}

void f_sum(int tab[n][m])
{
  int sum, tempsum;
  int tempTab[3][3];
  sum = tempsum = 0;
  
  for(int i = 0; i < n-2; i++)
    {
      for(int j = 0; j < m-2; j++)
        {
          for(int k = i; k-i < 3; k++)
            {
              for(int l = j; l-j < 3; l++)
                {
                  sum = sum + tab[k-i][l-j];
                }
            }
          if(sum > tempsum)
          {
            tempsum = sum;
            for(int x = i; x-i < 3; x++)
              {
                for(int y = j; y-j < 3; y++)
                  {
                    tempTab[x-i][y-j] = tab[x][y];
                  }
              }
            }
          sum = 0;
       }
    }
  std::cout << "Максимальная сумма: " << tempsum << std::endl;
  std::cout << "Подмассив: " << std::endl;
  
  for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
        {
          std::cout << tempTab[i][j] << " ";
        }
      std::cout << std::endl;
    }
  
}