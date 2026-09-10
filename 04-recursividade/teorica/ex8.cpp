/*
Função recursiva que retorna a quantidade 
de valores impares em um vetor
*/

#include <bits/stdc++.h>
using namespace std;

int impares(int vet[], int n){
    if(n == 1) return vet[0] % 2 == 1;
    if(vet[n-1] % 2 == 1) return impares(vet, n-1) + 1;
    return impares(vet, n-1);

}

int main(){
    int vet[] = {1,2,1,1,2};
    cout << "Qtd de numeros impares: " << impares(vet, 5) << endl;
}