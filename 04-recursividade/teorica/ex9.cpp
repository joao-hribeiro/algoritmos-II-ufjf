/*
Crie uma função recursiva que recebe como parâmetros
um valor inteiro val, um vetor de inteiros vet e seu
tamanho n. A função deve identificar recursivamente a
primeira ocorrência de um número no vetor que seja
menor do que val e substituir este número no vetor por val.
Caso não exista nenhum número no vetor que seja menor
do que val, a função não deve modificar o vetor.
*/

#include <bits/stdc++.h>
using namespace std;

void substituiMenor(int val, int vet[], int n){
    // Substitui somente a primeira ocorrencia do valor menor que 'val'
    if(vet[0] < val){
        vet[0] = val;
        return;
    } 
    substituiMenor(val, vet + 1, n-1);
    if(n <= 1) return;
}

int main(){
    int n = 0, val = 0;
    cin >> n;
    int *vet = new int [n];
    for(int i = 0; i < n; i++) cin >> vet[i];
    cin >> val;

    substituiMenor(val, vet, n);
    

    for(int i = 0; i < n; i++) cout << vet[i] << " ";
    cout << endl;

}