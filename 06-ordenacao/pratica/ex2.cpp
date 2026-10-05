/*
Desenvolver uma função para ordenar um vetor
utilizando um algoritmo conhecido como Gnome sort. 
O algoritmo deve percorrer o vetor da seguinte forma:
    ▶ Se i e igual a 0, move-se para a próxima posição;
    ▶ Se o elemento na posição 'i' e o elemento na posição 'i-1' já
    estão em ordem, move-se para a próxima posição;
    ▶ Se o elemento na posição 'i' e o elemento na posição 'i-1'
    estao fora de ordem, é feita uma troca e move-se para a
    posição anterior.
*/

#include "00-func.hpp"
using namespace std;

void gnomeSort(int vet[], int n) {
    int i = 1;
    while(i < n){
        if(i == 0) {
            i++;
            continue;
        }
        if(vet[i] >= vet[i-1]){
            i++;
            continue;
        }
        troca(&vet[i], &vet[i-1]);
        i--;
    }
}

int main(){
    int n = 10;
    int *vet1 = randVector();
    int *vet2 = decVector();

    imprime(vet1, n);
    gnomeSort(vet1, n);
    imprime(vet1, n);


    imprime(vet2, n);
    gnomeSort(vet2, n);
    imprime(vet2, n);
}   