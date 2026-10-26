/*
Altere a função anterior de forma que a cópia dos
elementos seja feita levando em consideração a ordenação
ao inves de simplesmente copiá-los de  'v1' e 'v2'
alternadamente. Assuma que os vetores 'v1' e 'v2' passados
como parametro já estão ordenados.  
*/
#include <bits/stdc++.h>
using namespace std;

int *intercala(int v1[], int v2[], int n1, int n2) {
  int tam = n1 + n2;
  int *v3 = new int[tam];
  int i = 0, j = 0, k = 0;

  while (i < n1 && j < n2) {
    if (v1[i] <= v2[j]) {
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
  int v1[] = {1, 2, 5}, n1 = 3;
  int v2[] = {3, 6, 7, 8, 9}, n2 = 5;

  int *v3 = intercala(v1, v2, n1, n2);

  for (int i = 0; i < 8; i++)
    cout << v3[i];

  return 0;
}
