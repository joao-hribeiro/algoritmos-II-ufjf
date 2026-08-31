/*
Crie uma função que recebe como parâmetro um vetor
vet de inteiros e seu tamanho 'n'. A função deve alocar
dinâmicamente um novo vetor e copiar para este novo
vetor apenas os elementos das posições de índice par do
vetor original. Ao final, a função deve retornar o vetor
criado. 
Observação: o tamanho deste novo vetor criado na
função deve ser o menor possível para acomodar
corretamente seus elementos. 
Faça um programa que leia um numero inteiro 'n' e aloque
dinâmicamente um vetor com 'n' elementos inteiros. Faça
um loop para ler cada um dos valores do vetor. Em
seguida, utilize a função 'indicesPares' para retornar o
novo vetor, que deve ser impresso na sequencia. Por fim,
libere toda a memória alocada dinamicamente.
*/

#include <bits/stdc++.h>
using namespace std;

int *indicesPares(int vet[], int n){
    int *novo = new int[n/2];
    for(int i = 0; i < n; i+=2){
        novo[i/2] = vet[i];
    }

    return novo;
}

int main(){
    int n = 0;
    cin >> n;
    int *vet = new int[n];

    for(int i = 0; i < n; i++)
        cin >> *(vet+i);
    
    int *novo = indicesPares(vet, n);
    for(int i = 0; i < n/2; i ++)
        cout << novo[i] << " ";
    cout << endl;
}

