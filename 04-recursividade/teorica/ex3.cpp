/*
Função recursiva que, dado um número inteiro N
retorna uma string de 0 e 1, correspondente ao seu valor em binário
*/

#include <bits/stdc++.h>
using namespace std;

string binario(int n){
    if(n == 0) return "";
    return binario(n/2) + to_string(n%2);

}

int main(){
    int n =0;
    cin >> n;
    cout << binario(n) << endl;
}