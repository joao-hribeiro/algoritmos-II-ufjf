/*
Crie uma função retorne quantos elementos de um vetor
'vet' de inteiros, de tamanho 'n', sao maiores do que um
valor 'val'. Essa função deve imprimir uma mensagem
para todos os elementos de 'vet'que sao maiores que 'val'. 
Em seguida, crie uma funçãopara alocar um vetor dinamicamente,
copiar os elementos do vetor vet que sao maiores que 'val' para esse novo
vetor criado e, ao final, retornar esse vetor criado de forma
dinamica. Se o vetor não possuir nenhum elemento maior
que 'val', retornar NULL.
*/

#include <bits/stdc++.h>
using namespace std;

int func1(int n, int vet[], int val){
    int cont = 0;
    for(int i = 0; i < n; i++)
        if(vet[i] > val){
            cout << "Posicao: " << i << " Valor: " << vet[i] 
            << " Endereco: " << &vet[i] << endl;
            cont++;
        }
    return cont;
}

int* func2(int n, int vet[], int val, int tam){
    if (tam == 0) return NULL;
    int *v = new int[tam];
    for(int i = 0; i < n; i++)
        if(vet[i] > val){
            *(v+i) = vet[i];
        }
    return v;

}

int main(){
    int vet[4] = {1, 3, 2, 4};
    int tam = func1(4, vet, 2);
    int *v = func2(4, vet, 2, tam);
    cout << "Valores maiores: "; 
    for(int i = 0; i < tam; i++)
        cout << *(v+i) << " ";
    cout << endl;
}