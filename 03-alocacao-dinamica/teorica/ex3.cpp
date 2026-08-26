/*
Modifique o exercício anterior e crie agora uma função
para alocar vetores de numeros reais de tamanho 'N' de
forma dinâmica.
*/
#include <bits/stdc++.h>
using namespace std;

float calcMedia(int n, float vet[]){
    float media = 0;
    for (int i = 0; i < n; i++)
        media += vet[i];
    return media / n;
}

float* alocaVetor(int n){
    return new float[n];
}

int main(){
    int n = 0;
    cin >> n;

    float *vet = alocaVetor(n);

    for(int i = 0; i < n; i++)
        cin >> *(vet+i);

    cout << "Média: " << calcMedia(n, vet) << endl;
    delete [] vet;
}