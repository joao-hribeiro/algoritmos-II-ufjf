/*
Altere novamente a função do Exercício 2 para que o vetor
resultante seja formado pela intercalação de duas seçõoes
ordenadas distintas do mesmo vetor vet. Estas secões são
definidas pelos  índices esq, meio e dir. A ideia é
intercalar a primeira seção, compreendida entre os indices
esq e meio, com a segunda seção, compreendida entre os
índices meio+1 e dir. O vetor resultante deve ser
retornado. Novamente, assuma que as duas seções do 
vetor ja estão ordenadas.
*/
#include <bits/stdc++.h>
using namespace std;

int *intercala(int vet[], int esq, int meio, int dir) {
  int tam = dir - esq + 1;
  int *v3 = new int[tam];
  int i = esq, j = meio + 1, k = 0;

  while (i <= meio && j <= dir) {
    if (vet[i] <= vet[j]) {
      v3[k++] = vet[i++];
    } else {
      v3[k++] = vet[j++];
    }
  }

  while (i <= meio) {
    v3[k++] = vet[i++];
  }

  while (j <= dir) {
    v3[k++] = vet[j++];
  }

  return v3;
}

int main() {
  int vet[] = {1, 2, 5, 3, 6, 7, 8, 9};

  int *v3 = intercala(vet, 0, 2, 4);

  for (int i = 0; i < 5; i++)
    cout << v3[i] << " ";

  return 0;
}
