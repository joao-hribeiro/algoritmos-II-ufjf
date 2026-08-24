#include <bits/stdc++.h>
using namespace std;

int main(){
    int *pt;
    cout << "Endereco de pt: " << &pt << endl;
    int x;
    cin >> x;
    pt = &x;
    cout << "Conteudo de pt: " << pt << endl;
    cout << "Endereco de x: " << &x << endl;
    *pt *= 10;
    cout << "Conteudo apontado por pt: " << *pt << endl;
    pt += 10;
    cout << "Conteudo de pt" << pt << endl;
}
