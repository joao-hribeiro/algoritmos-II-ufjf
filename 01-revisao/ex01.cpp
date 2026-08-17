// Faça um programa que leia do teclado um numero inteiro
// n e em seguida leia n numeros reais e calcule a sua média.

#include <bits/stdc++.h>
using namespace std;


int main(){

    int n = 0;
    double media = 0;

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        media += num;
    }    
    cout << media / n << endl;

    return 0;
}