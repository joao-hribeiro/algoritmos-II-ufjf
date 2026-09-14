// Função recursiva que retorna o menor valor de um vetor

#include <bits/stdc++.h>
using namespace std;

int menor(int vet[], int n)
{
    if (n == 1)
        return vet[0];
    int m = menor(vet + 1, n - 1);
    if (vet[0] < m)
        m = vet[0];
    return m;
}

int main()
{
    int n;
    cin >> n;
    int *vet = new int[n];
    for (int i = 0; i < n; i++)
        cin >> vet[i];

    cout << "Menor: " << menor(vet, n) << endl;
    delete[] vet;
}