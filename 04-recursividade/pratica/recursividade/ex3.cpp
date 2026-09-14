/*
Função recursiva que recebe um valor inteiro 'n'
e imprime todos os inteiros decrescendo de 'n' até 0
*/
#include <bits/stdc++.h>
using namespace std;

void imprimeDecrescente(int n)
{
    if (n == 0)
    {
        cout << endl;
        return;
    };

    cout << n << " ";
    imprimeDecrescente(n - 1);
}

int main()
{
    int n;
    cin >> n;
    imprimeDecrescente(n);
}