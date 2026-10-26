#include "../../troca.hpp"
#include <bits/stdc++.h>
using namespace std;

int particiona(int vet[], int inicio, int fim){
  int pivo = (inicio+fim)/2;
  troca(&vet[inicio], &vet[pivo]);
  int i = inicio; // Posição da última troca

  for(int j = inicio+1; j <= fim; j++)
    if(vet[j] < vet[inicio]){
      i++;
      troca(&vet[i], &vet[j]);
    }
  
  troca(&vet[inicio], &vet[i]);
  return i;
}

void auxQuickSort(int vet[], int inicio, int fim){
  if(inicio < fim){
    int p = particiona(vet, inicio, fim);
    auxQuickSort(vet, inicio, p-1);
    auxQuickSort(vet, p+1, fim);
  }
}

void quickSort(int vet[], int n){
  auxQuickSort(vet, 0, n-1);
};

int main(){
  int vet[] = {1,3,2,4,6,2,3,4,8,2};
  quickSort(vet, 10);
  for(int i = 0; i < 10; i++)
    cout << vet[i] << " ";
  cout << endl;
}