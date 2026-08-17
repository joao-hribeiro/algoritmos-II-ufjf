/*
Faça uma função que, dados uma string 'str' e um
caractere 'ch', procure e retorne a posicão da primeira
ocorrencia de 'ch' na string 'str'. Se 'ch' nao for encontrada
em 'str', retornar o valor −1.

    int procuraCharNaString(string str, char ch);
*/
#include <bits/stdc++.h>
using namespace std;

int procuraCharNaString(string str, char ch){
    int i = 0;
    for (i; i < str.size(); i++) 
        if(str[i] == ch) return i;
    return -1;

}

int main(){
    string str;
    char ch;
    getline(cin, str);
    cin >> ch;

    cout << procuraCharNaString(str, ch) << endl;

    return 0;
}

