/*
Implemente agora o exercício (1) utilizando uma função
que possua o seguinte prototipo: float leCalculaMedia(int n);
*/

#include <bits/stdc++.h>
using namespace std;

float leCalculaMedia(int n){
    float media = 0;

    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        media += num;
    }    
    return (media / n);

}

int main(){
    int n = 0;
    cin >> n;
    cout << leCalculaMedia(n) << endl;

    return 0;
}

