/*
Função recursiva que:
dado 3 numeros inteiros 'a', 'b' e 'inc'
imprime o intervalo fechado de 'a' até 'b' com incremento 'inc'
*/

#include <bits/stdc++.h>
using namespace std;

void imprimeIntervalo(int a, int b, int inc)
{
    if (a > b)
    {
        cout << endl;
        return;
    }
    cout << a << " ";
    imprimeIntervalo(a + inc, b, inc);
}

int main()
{

    int a, b, inc;
    cin >> a >> b >> inc;
    imprimeIntervalo(a, b, inc);
}