/*
Inverter a ordem de um vetor
*/
#include <bits/stdc++.h>
using namespace std;

void inverte(int vet[], int n){
    if(n == 0) return;
    for(int i = 0; i < n/2; i++) { // n/2 + 1
        int aux = vet[i]; // (n/2 - 0)
        vet[i] = vet[n-i-1]; // n/2
        vet[n-i-1] = aux; // n/2
    }
}
// Melhor caso(n = 0 ou n = 1): O(1)
// Pior caso(n > 1): O(n)
// Caso médio: O(n)

int main(){
    int n;
    cin >> n;
    int vet[n];
    for(int i = 0; i < n; i++)
        cin >> vet[i];
    
    inverte(vet, n);
    for(int i = 0; i < n; i++)
        cout << vet[i] << " ";
}