// Função que retorna se há valor negativo no vetor
#include <bits/stdc++.h>
using namespace std;

bool neg(int vet[], int n)
{
    if (n == 1)
        return vet[0] < 0;
    if (vet[0] < 0)
        return true;
    return neg(vet + 1, n - 1);
}

int main()
{
    int n;
    cin >> n;
    int *vet = new int[n];
    for (int i = 0; i < n; i++)
        cin >> vet[i];
    cout << (neg(vet, n) ? "True" : "False") << endl;
}