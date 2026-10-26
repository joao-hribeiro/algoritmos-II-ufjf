/*
Finalmente, altere mais uma vez a função do exercício
anterior, de forma que resultado da intercalação seja 
armazenado no proprio vetor passado como parâmetro,
sobrescrevendo os elementos contidos no intervalo 
[esq,dir]. Para isso, use o vetor resultante da implementação
do Exercício 3 como um vetor auxiliar e, ao final da
intercalação, copie os elementos deste vetor de volta para o 
vetor original.
*/
#include <bits/stdc++.h>
using namespace std;

void intercala(int vet[], int esq, int meio, int dir) {
  int tam = dir - esq + 1;
  int *aux = new int[tam];
  int i = esq, j = meio + 1, k = 0;

  while (i <= meio && j <= dir) {
    if (vet[i] <= vet[j]) {
      aux[k++] = vet[i++];
    } else {
      aux[k++] = vet[j++];
    }
  }

  while (i <= meio) {
    aux[k++] = vet[i++];
  }

  while (j <= dir) {
    aux[k++] = vet[j++];
  }

  for(int i = esq; i <= dir; i++){
    vet[i] = aux[i - esq];
  }
}

int main() {
  int vet[] = {1, 2, 5, 3, 6, 7, 8, 9};

  intercala(vet, 0, 2, 4);

  for (int i = 0; i < 8; i++)
    cout << vet[i] << " ";

  return 0;
}
