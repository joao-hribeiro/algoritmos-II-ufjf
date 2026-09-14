// Função recursiva para determinar se o número é primo;
#include <bits/stdc++.h>
using namespace std;

bool auxPrimo(int n, int div)
{
    if (div == 1)
        return true;

    if (n % div == 0)
        return false;

    return auxPrimo(n, div - 1);
}

bool ehPrimo(int n)
{
    if (n == 1)
        return false;
    return auxPrimo(n, n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << (ehPrimo(n) ? "Primo" : "Nao eh primo") << endl;
}