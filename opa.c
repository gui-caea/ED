//Brenno Santos Florêncio - 202210682
//Guilherme Couto  - 202121098
//Victor Fayer Martins - 202210362

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int N;
   int aux;

   do
   {   
   scanf("%d", &N); // Lê tamanho do vetor
   int vet[N];
   int vet_p[N];

   for (int i = 0; i < N; i++) // Adiciona os valores no vetor
   {
      scanf("%d", &aux);
      vet[i] = aux;
   }

   for (int i = 0; i < N - 1; i++) // ordena o vetor de ordem crescente
   {
      int menor = i;
      for (int j = i + 1; j < N; j++)
      {
         if (vet[j] < vet[menor])
            menor = j;
      }
      vet_p[i] = menor;
      int aux = vet[i];
      vet[i] = vet[menor];
      vet[menor] = aux;
   }
  
   printf("\n");
   for (int i = 0; i < N - 1; i++)// printa posicao do vetor
   {
      printf("%d ", vet_p[i] + 1);
   }
   printf("\n");
   for (int i = 0; i < N; i++)// printa vetor ordenado
   {
      printf("%d ", vet[i]);
   } 
   printf("\n");
   printf("\n");

   } while (N!=0);
   printf("\n");
   return 0;
}