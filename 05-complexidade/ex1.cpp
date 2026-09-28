/*
Função iterativa para calcular o n-ésimo termo da
sequência de Fibonacci e análise de sua complexidade
*/
#include <bits/stdc++.h>
using namespace std;

int fib(int n) {
    if(n == 0) // 1
        return 0; 
    if(n == 1) // 1
        return 1; 

    int a = 0; // 1
    int b = 1; // 1
    int res; // 1

    for(int i = 2; i <= n; i++) { //(n-1) + 1
        res = a + b; // (n-2) + 1
        a = b; // n-1
        b = res; // n-1
    }
    return res; //1
}

// Melhor caso(n=0 e n=1): O(1)
// Pior caso(n > 2): O(n) 
// Caso médio: O(n)

int main() {
    int n = 0;
    cin >> n;
    cout << fib(n) << endl;
}