/*
Desenvolver uma função recursiva para calcular e retornar
o maior valor de um vetor com n números inteiros.
Caso base: vetor com apenas 1 elemento, que é o maior.
Passo recursivo: o maior elemento do vetor é ou o último
elemento ou o maior elemento dentre os n − 1 primeiros
elementos do vetor.
*/
#include <bits/stdc++.h>
using namespace std;

int maior(int vet[], int n){
    if(n == 1) return vet[0];
    int m = maior(vet, n-1);
    if(vet[n-1] > m)
        return vet[n-1];
    return m;
}

int main(){
    int vet[5] = {1,2,3,4,3};
    cout << "Maior: " << maior(vet, 5) << endl;
}