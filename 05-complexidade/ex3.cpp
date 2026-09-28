/*
Função que imprime todos os elementos distintos de um vetor;
*/

#include <bits/stdc++.h>
using namespace std;

void imprimeDistintos(int vet[], int n){
    for(int i = 0; i < n; i++){ // n + 1
        int repetido = 0; // n
        for(int j = 0; j < i; j++){// (n² - n)/2 + n = (n² + n)/2
            if(vet[i] == vet[j]){ //n * (n-1) / 2 = (n² - n)/2
                repetido = 1; // 0
                break; // 0
            }

        }
        if(!repetido) cout << vet[i]; // n
    }
    cout << endl; // 1
}

//Melhor caso: 
//Pior caso:


int main(){
    int n = 0;
    cin >> n;
    int vet[n];
    for(int i = 0; i < n; i ++) {
        cin >> vet[i];
    }
    imprimeDistintos(vet, n);
}