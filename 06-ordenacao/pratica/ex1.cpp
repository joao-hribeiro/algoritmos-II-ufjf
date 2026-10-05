#include "00-func.hpp"

/*
Desenvolver uma função para ordenar um vetor utilizando
uma variação do Bubble sort conhecida como Cocktailsort.
A ideia e aplicar o mesmo procedimento do Bubble sort,
alternando, a cada iteração, a direção de varredura da 
esquerda para a direita, e da direita para a esquerda.
*/
void cocktailSort(int vet[],int n){
    int inicio = 0;
    int fim = n -1;
    bool trocou = false;
    
    do
    {
        trocou = false;
        for(int i = inicio; i < fim; i++)
            if(vet[i] > vet[i + 1]) {
                troca(&vet[i], &vet[i+1]);
                trocou = true;
            }
        
        if(!trocou) break; //Para se já estiver ordenado
        fim--;

        trocou = false;
        for(int i = fim - 1; i >= inicio; i--)
            if(vet[i] > vet[i+1]){
                troca(&vet[i], &vet[i+1]);
                trocou = true;
            }
        inicio++;

    } while (trocou);
    
}

int main () {
    int n = 10;
    int *vet1 = randVector();
    int *vet2 = decVector();

    imprime(vet1, n);
    cocktailSort(vet1, n);
    imprime(vet1, n);


    imprime(vet2, n);
    cocktailSort(vet2, n);
    imprime(vet2, n);
}