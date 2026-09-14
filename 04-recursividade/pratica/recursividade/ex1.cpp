// Função recursiva que calcula o fatoral de um número inteiro 'n'

#include <bits/stdc++.h>
using namespace std;

int fatorial(int n)
{
    if (n == 0)
        return 1;
    return n * fatorial(n - 1);
}

int main()
{
    int n = 0;
    cin >> n;
    cout << fatorial(n) << endl;
}