/*
Desenvolver uma função para criar e retornar um
vetor v3 cujos elementos são resultado da intercalação de  ̃
dois outros vetores v1 e v2 (de tamanhos n1 e n2,
respectivamente) passados como parametro. Os elementos
de v1 e v2 devem ser copiados para v3 de forma alternada.
*/
#include <bits/stdc++.h>
using namespace std;

int *intercala(int v1[], int v2[], int n1, int n2) {
  int tam = n1 + n2;
  int *v3 = new int[tam];
  int i = 0, j = 0, k = 0;

  while (i < n1 && j < n2) {
    if (k % 2 == 0) {
      v3[k++] = v1[i++];
    } else {
      v3[k++] = v2[j++];
    }
  }

  while (i < n1) {
    v3[k++] = v1[i++];
  }

  while (j < n2) {
    v3[k++] = v2[j++];
  }

  return v3;
}

int main() {
  int v1[] = {1, 5, 2}, n1 = 3;
  int v2[] = {3, 1, 7, 3, 4}, n2 = 5;

  int *v3 = intercala(v1, v2, n1, n2);

  for (int i = 0; i < 8; i++)
    cout << v3[i];

  return 0;
}
