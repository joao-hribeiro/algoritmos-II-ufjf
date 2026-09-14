/*
Função recursiva que retorna o valor do n-ésimo número harmonico
*/
#include <bits/stdc++.h>
using namespace std;

float harmonico(int n)
{
    if (n == 0)
        return 0;
    return 1. / n + harmonico(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << harmonico(n) << endl;
}