#include <bits/stdc++.h>
#include "troca.hpp"
using namespace std;

void selectionSort(int vet[], int n){
  for(int i = 0; i < n - 1; i++) {
    int menor = i;
    for(int j = i; j < n - 1; j++){
      if(vet[j] < vet[menor]){
        menor = j;
      }
    }
    troca(&vet[menor], &vet[i]);
  }
}

int main(){
  int vet[] = {1,3,2,4,6,2,3,4,8,2};
  selectionSort(vet, 10);
  for(int i = 0; i < 10; i++)
    cout << vet[i] << " ";
  cout << endl;
}