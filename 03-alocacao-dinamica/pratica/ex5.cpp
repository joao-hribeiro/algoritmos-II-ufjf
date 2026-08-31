/*
Faça um programa que leia a ordem de uma matriz
quadrada a partir do teclado. Em seguida, aloque uma
matriz dessa ordem e faça a leitura de seus elementos. Ao
final, imprima a matriz. Certifique-se de que toda
memoria é apropriadamente desalocada ao final do
programa (na sequencia correta).
*/

#include <bits/stdc++.h>
using namespace std;


int main(){
    int n = 0;
    cin >> n;

    int **matriz = new int* [n];

    for(int i = 0; i < n; i++){
        matriz[i] = new int[n];
    }
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> matriz[i][j];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cout << matriz[i][j] << " ";
        cout << endl;
    }
    
    for(int i = 0; i < n; i++)
        delete [] matriz[i];
    delete [] matriz;

}