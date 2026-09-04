/*
Função que, dado um numero inteiro N
retorna a soma de seus dígitos
*/

#include <bits/stdc++.h>
using namespace std;

int soma(int n){
    if(n/10 == 0) return n;
    return n%10 + soma(n/10);   
}

int main(){
    int n =0;
    cin >> n;
    cout << soma(n) << endl;
}