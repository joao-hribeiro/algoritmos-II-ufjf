/*
Função que retorna o somatório:
soma(x, y) = x - x²/2 + x³/3 ...
*/

#include <bits/stdc++.h>
using namespace std;

float soma(float x, int n)
{
    if (n == 1)
        return x;

    return pow(x, n) / n * pow(-1, n - 1) + soma(x, n - 1);
}

int main()
{
    float x;
    int n;
    cin >> x >> n;
    cout << soma(x, n) << endl;
}