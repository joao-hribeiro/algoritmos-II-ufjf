#include "troca.hpp"
#include <bits/stdc++.h>
using namespace std;


void merge(int vet[], int esq, int meio, int dir){
  int i = esq, j = meio + 1, k = 0;
  int aux[dir-esq+1];
  while(i <= meio && j <= dir){
    if(vet[i] <= vet[j])
      aux[k++] = vet[i++];
    else
      aux[k++] = vet[j++];
  }
}

/**
 * @param vet Vetor que será ordenado 
 * @param esq Indice de inicio do intervalo 
 * @param dir Indice de fim do intervalo
 */
void auxMergeSort(int vet[], int esq, int dir){
  if(esq < dir){
    int meio = (esq + dir) / 2;
    auxMergeSort(vet, esq, meio);
    auxMergeSort(vet, meio, dir);
    merge(vet, esq, meio, dir);
  }
}

void mergeSort(int vet[], int n){
  auxMergeSort(vet, 0, n-1);
}

int main(){
  int vet[] = {1,3,2,4,6,2,3,4,8,2};
  mergeSort(vet, 10);
  for(int i = 0; i < 10; i++)
    cout << vet[i] << " ";
  cout << endl;
}