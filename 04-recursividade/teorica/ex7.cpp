/*
Função recursiva que calcula e retorna a soma de todos os 
valores de um vetor com 'n' números inteiros 
*/

#include <bits/stdc++.h>
using namespace std;

int soma(int vet[], int n){
    if(n==1) return vet[0];
    return vet[n-1] + soma(vet, n-1);
}

int main(){
    int vet[3] = {2,4,6};
    cout << "Soma: " << soma(vet, 3) << endl;
}