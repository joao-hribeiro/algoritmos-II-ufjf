/*
Crie uma função que recebe um vetor 'vet' com seu
tamanho 'tam' e um novo tamanho novo para alocação. Se
o novo tamanho for menor ou igual ao tamanho original,
nada deve ser feito e o vetor original deve ser retornado.
Caso contrário, a função deve alocar e retornar um novo
vetor, preservando as informações do vetor original e
inicializando as posições restantes com zero. Protótipo:
int* redimensiona(int vet[], int tam,int novo);
Faça um programa que aloque um vetor de inteiros com
um tamanho lido do teclado. Em seguida, faça a leitura
dos elementos do vetor e chame a função redimensiona,
passando como terceiro argumento um segundo tamanho,
tambem lido do teclado. Ao final, imprima o vetor
modificado. Certifique-se de que toda memoria é
apropriadamente desalocada ao final do programa.
*/
#include <bits/stdc++.h>
using namespace std;

int* redimensiona(int vet[], int tam, int novo){
    if(novo < tam) return vet;
    int *new_vet = new int[novo];
    for(int i = 0; i < novo; i++){
        if(i < tam) new_vet[i] = vet[i];
        else new_vet[i] = 0;
    }
    return new_vet;
}

int main(){
    int n = 0;
    cin >> n;
    int *vet = new int[n];

    for(int i = 0; i < n; i++)
        cin >> *(vet+i);
    
    int new_tam = 0;
    cin >> new_tam;

    int *new_vet = redimensiona(vet, n, new_tam);
    for(int i = 0; i < new_tam; i++)
        cout << new_vet[i] << " ";
    cout << endl;
    delete [] vet, new_vet;
}
