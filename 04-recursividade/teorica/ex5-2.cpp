/*
Outra implementação do exercicio anterior
*/

#include <bits/stdc++.h>
using namespace std;

int auxMaior(int vet[], int n, int i){
    if(i == n-1) return vet[i];
    int m = auxMaior(vet, n, i+1);
    
    return vet[i] > m ? vet[i] : m;
}

int maior(int vet[], int n){
    return auxMaior(vet, n, 0);
}

int main(){
    int vet[5] = {1,2,3,4,3};
    cout << "Maior: " << maior(vet, 5) << endl;
}