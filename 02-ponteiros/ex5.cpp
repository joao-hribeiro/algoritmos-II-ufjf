/*
Dados dois numeros inteiros  ́ num e div, fac ̧a uma func ̧ao ̃
para calcular e retornar o quociente e o resto da divisao ̃
inteira de num por div.
*/
#include <bits/stdc++.h>
using namespace std;


void divisao(int num, int div, int *q, int *r){
    *q = num / div;
    *r = num % div;   
}

int main(){
    int a = 3; int b = 2;
    divisao(a, b, &a, &b);
    cout << "a: " << a <<" b: " << b << endl;

}