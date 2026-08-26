/*
Faça um programa que leia um numero inteiro 'N' e que
aloque dinamicamente um vetor com 'N' elementos reais e
faça a leitura dos seus valores. Em seguida, calcule a
média dos valores do vetor e imprima na tela. Por fim,  ́
libere a memoria alocada de forma dinâmica.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 0;
    cin >> n;

    float *ptr = new float[n];
    for(int i = 0; i < n; i++)
        cin >> *(ptr+i);
        
    float media = 0;
    for(int i = 0; i < n; i++)
        media += *(ptr+i);
    media /= n;
    cout << "Média: " << media << endl;
    delete [] ptr;
}