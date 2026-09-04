/*
função recursiva que recebe um número
inteiro n e retorna o valor do somatório:
n + (n − 1) + (n − 2) + . . . + 2 + 1.
*/

#include <bits/stdc++.h>
using namespace std;

int somatorio(int n){
    if(n<0) return 0; //limitação para não colocar valor negativo
    if(n == 1) return 1; // caso base
    return n + somatorio(n-1); //recursão
}

int main(){
    int n = 0;
    cin >> n;
    cout << somatorio(n)<<endl;
}