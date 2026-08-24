#include <bits/stdc++.h>
using namespace std;

int main(){
    int a=10, b=20, c=30, v[3], *pti, *pti1, *pti2;
    pti1 = &a;
    pti2 = &b;

    //Usando 'pti1' e 'pti2', faça com que 'a' e 'b' recebam o valor de 'c'.
    *pti1 = c;
    *pti2 = c;

    //Usando pti e aritmetica de ponteiros, preencha o vetor 'v' com os valores
    //de seus  ́ındices somados de 1.
    pti = v;
    for(int i = 0; i < 3; i++)
        *(pti + i) = i+1;

    //Imprima os conteudos do vetor e das variáveis 'a', 'b' e 'c'.
    cout << "a: " << a << " b:" << b << " c:" << c << endl;
    for(int i = 0; i < 3; i++)
        cout << v[i] << " ";
    cout << endl;

    // Usando pti, atribua a variável 'a' o valor da primeira posição do vetor acrescido de 99.
    pti = &a;
    *pti = v[0] + 99;

    // Usando 'pti1' e 'pti2', atribua a primeira posição do vetor a soma dos  valores de 'a' e 'b'.
    v[0] = *pti1 + *pti2;

    // Atribua a segunda posição do vetor o conteúdo apontado por 'pti2'.
    v[2] = *pti2;

    // Usando aritmetica de ponteiros, atribua à terceira posição do vetor o
    // conteudo apontado por 'pti'.
    v[3] = *pti;

    // Usando ponteiros, incremente o valor de 'b' e decremente o valor da
    // segunda posição do vetor.
    *pti++;
    v[2]--;

    cout << "a: " << a << " b:" << b << " c:" << c << endl;
    for(int i = 0; i < 3; i++)
        cout << v[i] << " ";
    cout << endl;
}
