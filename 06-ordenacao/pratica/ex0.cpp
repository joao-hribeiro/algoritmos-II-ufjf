#include <bits/stdc++.h>
using namespace std;

/// @brief Retorna um vetor de inteiros aleatório
/// @param n Tamanho do vetor
/// @param m Maior número 
/// @return int* vetor de inteiros aleatório
int* randVector(int n, int m) {
    int *vet = new int[n];
    for(int i = 0; i < n; i++)
        vet[i] = rand() % m;
    return vet;
}


/// @brief Retorna um vetor de inteiros decrescente
/// @param n Tamanho do vetor
/// @param start Primeiro valor do vetor
/// @param end Valor final do vetor
/// @return int* vetor de inteiros
int* decVector(int n = 10, int start = 10, int end = 0) {
    int *vet = new int[n];
    int step = (end - start) / n;
    for(int i = 0; i < n; i++)
        vet[i] = (n - i) * step;
    return vet;
}

void imprime(int vet[], int n) {
    for(int i = 0; i < n; i++)
        cout << vet[i] << " ";
    cout << endl;
}

int main() {
    int *vet = randVector(10, 100);
    imprime(vet, 10);
    int *vet2 = decVector(10, 0, 20);
    imprime(vet2, 10);
}