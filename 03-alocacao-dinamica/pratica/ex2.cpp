/*
Implemente uma função que calcule o produto escalar
entre dois vetores do tipo de dados float. No programa
principal voce deve ler o tamanho 'n' dos vetores, os quais
devem ser alocados dinamicamente usando new. Depois,
voce deve ler os dados dos vetores e chamar a função para
calcular o produto escalar. Por fim, use o operador
delete para desalocar toda memoria alocada de forma dinâmica.
*/

#include <bits/stdc++.h>
using namespace std;

float prodEscalar(int n, float x[], float y[]){
    float prod = 0;
    for(int i = 0; i < n; i++)
        prod += (x[i]*y[i]);
    return prod;
}

int main(){
    int n = 0;
    cin >> n;
    float *y = new float[n], *x = new float[n];

    for(int i = 0; i < n; i++){
        cin >> *(x+i);
        cin >> *(y+i);
    }

    cout << prodEscalar(n, x, y) << endl;

    delete [] y, x;
}