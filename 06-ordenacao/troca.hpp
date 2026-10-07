#ifndef TROCA_H
#define TROCA_H

void troca(int *a, int *b){
  int aux = *a;
  *a = *b; 
  *b = aux;
}

#endif