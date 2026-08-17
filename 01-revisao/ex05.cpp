/*
Faça uma função que receba um 'n' número inteiro 'n' > 0 e
determine se este e um número primo. A função deve
retornar um valor booleano: true ou false. 
Prototipo: bool ehPrimo(int n);
*/
#include <bits/stdc++.h>
using namespace std;

bool ehPrimo(int n){
    if(n == 1) return false;
    for(int i = 2; i < n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    cout << (ehPrimo(n) ? "Primo" : "Nao eh primo") << endl;

    return 0;
}