/*
Faça um programa que leia um numero inteiro 'n' e aloque
um vetor com 'n' inteiros de forma dinamica (use o
operador new). Em seguida, o programa deve ler os
valores do vetor e calcular a média dos elementos desse
vetor. Por fim, deve desalocar (use o operador delete) a
memoria usada para armazenar os seus elementos.

*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    int* vet = new int[n];

    int media = 0;
    for(int i = 0; i < n; i++){
        cin >> *(vet+i);
        media += *(vet+i);
    }
    cout << float(media) / n << endl;
    delete [] vet;
}