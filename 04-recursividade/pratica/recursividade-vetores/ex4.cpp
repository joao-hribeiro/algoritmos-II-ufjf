#include <bits/stdc++.h>
using namespace std;

int auxIguais(int vet1[], int vet2[], int n, int i)
{
    if (i == n - 1)
        return (vet1[i] == vet2[i] ? -1 : i);
    if (vet1[i] == vet2[i])
        return auxIguais(vet1, vet2, n, i + 1);
    return i;
}

int iguais(int vet1[], int vet2[], int n)
{
    return auxIguais(vet1, vet2, n, 0);
}

int main()
{
    int n;
    cin >> n;
    int *vet1 = new int[n], *vet2 = new int[n];
    for (int i = 0; i < n; i++)
        cin >> vet1[i] >> vet2[i];
    cout << iguais(vet1, vet2, n) << endl;
}