/*
Implementar uma função recursiva para calcular x mod y,
que indica o resto da divisao (módulo) de um número inteiro por outro.
*/

#include <bits/stdc++.h>
using namespace std;

int mod(int x, int y)
{
    if (x == y)
        return 0;
    if (x < y)
        return x;
    return mod(x - y, y);
}

int main()
{
    int x, y;
    cin >> x >> y;
    cout << mod(x, y) << endl;
}