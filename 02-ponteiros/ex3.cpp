#include <bits/stdc++.h>
using namespace std;

int main() {
    int x = 23;
    float y = 9.7;

    // Declare e inicialize um ponteiro 'pt1' com o endereço de 'x'.
    int *pt1 = nullptr;
    pt1 = &x;

    // Incremteno o valor de x indiretamente
    (*pt1)++;

    // Declare 'pt2' apontando para y
    float *pt2 = nullptr;
    pt2 = &y;

    // Imprima o valor de x e y sem usar as variáveis
    cout << *pt1 << " " << *pt2 << endl;

    // Ponteiro para ponteiro para y
    float **pt3 = nullptr;
    pt3 = &pt2;
    cout << **pt3 << endl;

    // Usando 'pt3', mova 'pt2' para a proxima posição de memória
    (*pt3)++;

    // Usando apenas 'pt3' imprima os endereços de 'pt3' e 'pt2'
    cout << "Endereço de pt3: " << &pt3 << endl;
    cout << "Endereço de pt2: " << *pt3 << endl;
}