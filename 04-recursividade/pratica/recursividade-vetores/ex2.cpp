/*
Função recursiva para calcular e retornar a
quantidade de valores pares de um vetor com 'n' números inteiros
*/
#include <bits/stdc++.h>
using namespace std;

int pares(int vet[], int n)
{
    if (n == 1)
        return vet[0] % 2 == 0 ? 1 : 0;
    return (vet[0] % 2 == 0 ? 1 : 0) + pares(vet + 1, n - 1);
}

int main()
{
    int n;
    cin >> n;
    int *vet = new int[n];
    for (int i = 0; i < n; i++)
        cin >> vet[i];
    cout << "Numero de pares: " << pares(vet, n) << endl;
}