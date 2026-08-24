/*
Implemente a função 'troca' que troca o conteudo de duas
variaveis inteiras 'a' e 'b'. Faça um programa que teste a
função implementada.
*/

#include <bits/stdc++.h>
using namespace std;

void troca(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

int main() {
    int a = 1, b = 2;
    troca(&a, &b);
    cout << "a: " << a << " b: " << b << endl;
}