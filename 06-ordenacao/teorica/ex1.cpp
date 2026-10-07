// Implementação do algoritmo bubble sort que 
// para assim que o vetor estiver ordenado

#include <bits/stdc++.h>
#include "../troca.hpp"
using namespace std;

void bubbleSort(int vet[], int n){
  bool trocou = false;
  do{
    trocou = false;
    for(int i = 0; i < n-1; i++){
      if(vet[i] > vet[i+1]){
        troca(&vet[i], &vet[i+1]);  
        trocou = true;
      }
    }
    n--;
  } while (trocou);
}

int main(){
  int vet [] = {6, 9, 1, 8, 15, 4, 13, 9, 2, 2};
  int n = 10;

  cout << "Antes\n";
  for(int i = 0; i < n; i++)
    cout << vet[i] << " ";
  cout << endl;

  bubbleSort(vet, n);

  cout << "Depois\n";
  for(int i = 0; i < n; i++)
    cout << vet[i] << " ";
  cout << endl;
}