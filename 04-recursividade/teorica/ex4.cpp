/*
Considere uma sequência definida da seguinte forma: se N
é par, então o próximo valor da sequência é dado por n/2;
caso contrário, o próximo valor é dado por 3n + 1. A
sequência se encerra quando n = 1. 
Crie uma função recursiva que recebe um valor inteiro 
positivo N e duas variáveis passadas por referência. 
A função deve calcular a sequência a partir do valor n,
imprimindo cada um dos valores gerados, e armazenar os 
totais de números pares e ímpares nas variáveis apontadas
pelos ponteiros. Além disso, a função deve retornar 
o total de valores gerados.
*/

#include <bits/stdc++.h>
using namespace std;

int sequencia(int n, int *npar, int *nimpar){
    if(n == 1) {
        cout << n << endl;
        return 1;
    }
    cout << n << " ";
    int next_value = 0;
    if(n % 2 == 0){ // n é par => n/2
        next_value = n/2;
        (*npar)++;
    }
    else { // n é impar => 3n+1
        next_value = 3*n + 1;
        (*nimpar)++;
    }
    return 1 + sequencia(next_value, npar, nimpar);
}

int main(){
    int n = 0, npar = 0, nimpar = 0;
    cin >> n;
    int i = sequencia(n, &npar, &nimpar);
    cout << "Numero de valores gerados: " << i << endl;
    cout << "Quantidade de numeros pares: " << npar << endl;
    cout << "Quantidade de numeros impares: " << nimpar << endl;
}