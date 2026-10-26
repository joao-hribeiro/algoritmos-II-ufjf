/*
Utilize a função desenvolvida no Exercício 4 para
implementar o algoritmo de ordenação Merge sort.
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

void auxMergeSort(int vet[], int esq, int dir){
  if(esq < dir){
    int meio = (esq + dir) / 2;
    auxMergeSort(vet, esq, meio);
    auxMergeSort(vet, meio + 1, dir);
    intercala(vet, esq, meio, dir);
  }
}

void mergeSort(int vet[], int n){
  auxMergeSort(vet, 0, n-1);
}

int main() {
  int vet[] = {1, 2, 5, 3, 6, 7, 3, 9};

  mergeSort(vet, 8);

  for (int i = 0; i < 8; i++)
    cout << vet[i] << " ";

  return 0;
}
