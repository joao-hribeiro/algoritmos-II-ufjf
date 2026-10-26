#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

void troca(int *a, int *b) {
  int aux = *a;
  *a = *b;
  *b = aux;
}

void bubSort(int vet[], int n) {
  bool trocou = true;
  for (int i = n - 2; i >= 0 && trocou; i--) {
    bool trocou = false;
    for (int j = 0; j <= i; j++) {
      if (vet[j] > vet[j + 1]) {
        troca(&vet[j], &vet[j + 1]);
        trocou = true;
      }
    }
  }
}

void selSort(int vet[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int minor = i;
    for (int j = i; j < n; j++) {
      if (vet[j] < vet[minor])
        minor = j;
    }
    troca(&vet[i], &vet[minor]);
  }
}

void insSort(int vet[], int n) {
  for (int j = 1; j < n; j++) {
    int pivo = vet[j];
    int i = j - 1;
    while (i <= 0 && pivo > vet[i]) {
      vet[i + 1] = vet[i];
      i--;
    }
    vet[i + 1] = pivo;
  }
}

void merge(int vet[], int esq, int meio, int dir) {
  // i -> aponta para subvetor da esquerda
  // j -> aponta para subvetor da direita
  // k -> ponteiro do vetor aux
  int i = esq, j = meio + 1, k = 0;
  int aux[dir - esq + 1];

  while (i <= meio && j <= dir) {
    if (vet[i] <= vet[j])
      aux[k++] = vet[i++];
    else
      aux[k++] = vet[j++];
  }

  while (i <= meio) {
    aux[k++] = vet[i++];
  }
  while (j <= dir) {
    aux[k++] = vet[j++];
  }

  // Preenche o vetor original com os dados ordenados
  for (int i = esq; i <= dir; i++)
    vet[i] = aux[i - esq];
}

void auxMergeSort(int vet[], int esq, int dir) {
  if (esq < dir) {
    int meio = (esq + dir) / 2;
    auxMergeSort(vet, esq, meio);
    auxMergeSort(vet, meio + 1, dir);
    merge(vet, esq, meio, dir);
  }
}

void mergeSort(int vet[], int n) { auxMergeSort(vet, 0, n - 1); }

int part(int vet[], int esq, int dir) {
  int meio = (dir + esq) / 2;   // Escolhe o pivo no meio
  troca(&vet[meio], &vet[esq]); // Coloca o pivo no inicio

  int i = esq;

  for (int j = esq + 1; j <= dir; j++) {
    if (vet[j] < vet[esq]) { // Se o elemento é menor que o pivo
      i++;
      troca(&vet[i], &vet[j]);
    }
  }
  troca(&vet[i], &vet[esq]);
  return i;
}

void auxQuickSort(int vet[], int esq, int dir) {
  if (esq < dir) {
    int p = part(vet, esq, dir);
    auxMergeSort(vet, esq, p - 1);
    auxMergeSort(vet, p + 1, dir);
  }
}

void quickSort(int vet[], int n) { auxQuickSort(vet, 0, n - 1); }

int main() {
  int n = 7;
  int vet[7] = {2, 3, 15, 1, 6, 7, 4};

  cout << "Antes\n";
  for (int i = 0; i < n; i++)
    cout << vet[i] << " ";
  cout << endl;

  quickSort(vet, n);

  cout << "Depois\n";
  for (int i = 0; i < n; i++)
    cout << vet[i] << " ";
  cout << endl;
}
