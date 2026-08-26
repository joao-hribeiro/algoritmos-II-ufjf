/*
Modifique o exercício anterior e crie uma função para
realizar a tarefa de calcular a media dos elementos do vetor.
*/

#include <bits/stdc++.h>
using namespace std;

float calcMedia(int n, float vet[]){
    float media = 0;
    for (int i = 0; i < n; i++)
        media += vet[i];
    return media / n;
}

int main(){
    int n = 0;
    cin >> n;

    float *vet = new float[n];

    for(int i = 0; i < n; i++)
        cin >> *(vet+i);

    cout << "Média: " << calcMedia(n, vet) << endl;
    delete [] vet;
}