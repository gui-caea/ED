

#include <stdio.h>
#include <stdlib.h>



int main(){
  int tam;
  int aux;
 

  scanf("%d", &tam); // Lê tamanho do vetor
  int vet[tam];
  int vet_p[tam];
  
  for(int i = 0; i < tam; i++ ) //Adiciona os valores no vetor
  {
  scanf("%d", &aux);
  vet[i] = aux;
  }

 for(int i = 0; i < tam - 1; i++) //ordena o vetor de ordem crescente
 {
      int menor = i;
      for(int j = i + 1; j < tam; j++) {
         if (vet[j] < vet[menor]) menor = j;  
      }
      vet_p[i] = menor;
      int aux = vet[i];
      vet[i] = vet[menor];
      vet[menor] = aux;
 }
 printf("\n");
 printf("\n");
 for (int i = 0; i < tam - 1; i++){
    printf("%d ", vet_p[i] + 1);
    
 }
  printf("\n");
 for (int i = 0; i < tam; i++){
    printf("%d ", vet[i]);
 }
  printf("\n");

  
}
  
  

