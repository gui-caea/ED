// Brenno Santos Florêncio - 202210682
// Guilherme Couto  - 202121098
// Victor Fayer Martins - 202210362

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
  while (scanf("%d", &n) == 1)
  {
    int arr[n];
    int puladas[n];

    for (int i = 0; i < n; i++)
    {
      scanf("%d", &arr[i]);
      puladas[i] = 0;
    }

    // calcula as puladas
    for (int i = 0; i < n; i++)
    {
      for (int j = i - 1; j >= 0; j--)
      {
        if (arr[j] < arr[i])
        {
          puladas[i]++;
        }
      }
    }

    // imprime o array de puladas
    for (int i = 0; i < n; i++)
    {
      printf("%d ", puladas[i]);
    }
    printf("\n");
  }
  return 0;
}