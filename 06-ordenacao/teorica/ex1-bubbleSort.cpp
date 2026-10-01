#include <bits/stdc++.h>
#include "troca.hpp"
using namespace std;

void bubbleSort(int vet[], int n){
  for(int i = 0; i < n-1; i++)
    for(int j = 0; j < n-1-i; j++)
      if(vet[j] > vet[j+1])
        troca(&vet[j], &vet[j+1]);
} 

void outroBubbleSort(int vet[], int n){
  for(int i = n; i > 1; i--)
    for(int j = 0; j < i -1; j++)
      if(vet[j] > vet[j+1]) troca(&vet[j], &vet[j+1]);
}

int main(){
  int vet[] = {1,3,2,4,6,2,3,4,8,2};
  outroBubbleSort(vet, 10);
  for(int i = 0; i < 10; i++)
    cout << vet[i] << " ";
  cout << endl;
}