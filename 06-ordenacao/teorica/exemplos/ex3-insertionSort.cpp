#include <bits/stdc++.h>
#include "../../troca.hpp"
using namespace std;

void insertionSort(int vet[], int n){
  for(int i = 1; i < n; i++){
    int aux = vet[i];
    int j = i -1;
    while (j >= 0 && vet[j] > aux){
      vet[j+1] = vet[j];
      j--;
    }
    vet[j+1] = aux;
  }
}

int main(){
  int vet[] = {1,3,2,4,6,2,3,4,8,2};
  insertionSort(vet, 10);
  for(int i = 0; i < 10; i++)
    cout << vet[i] << " ";
  cout << endl;
}