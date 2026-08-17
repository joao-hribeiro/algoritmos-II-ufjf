/*
Faça uma funcão que receba como parâmetros um vetor de
numeros reais e o seu tamanho n e que leia do teclado n
numeros reais, guarde-os no vetor e calcule a sua média. 
A função deve retornar a média ao final.
*/

/*
Implemente agora o exercício (1) utilizando uma função
que possua o seguinte prototipo: float leCalculaMedia(int n);
*/

#include <bits/stdc++.h>
using namespace std;

float leVetorCalculaMedia(int n, float vet[]){
    float media = 0;

    for(int i = 0; i < n; i++)
        media += vet[i];    

    return (media / n);

}

int main(){
    int n = 0;
    cin >> n;
    float vet[n];
    for(int i = 0; i < n; i++)
        cin >> vet[i];

    cout << leVetorCalculaMedia(n, vet) << endl;

    return 0;
}

