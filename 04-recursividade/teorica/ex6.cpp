/*
Desenvolver uma função recursiva para calcular e retornar
o menor valor de um vetor com n números inteiros.
*/

#include <bits/stdc++.h>
using namespace std;

int auxMenor(int vet[], int n, int i){
    if(i == n-1) return vet[i];
    int m = auxMenor(vet, n, i+1);
    return vet[i] < m ? vet[i] : m;
}

int menor(int vet[], int n){
    return auxMenor(vet, n, 0);
}

int main(){
    int vet[] = {3,2,1,2};
    cout << "Menor: " << menor(vet, 3) << endl;
}